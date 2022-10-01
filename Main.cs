using System;
using System.IO;
using RDR2;
using RDR2.UI;
using RDR2.Native;
using RDR2.Math;
using System.Windows.Forms;
using System.Collections.Generic;
using System.Threading.Tasks;

/*
 * Created by Terk in 2019
 * 
 * NEEDS REFACTOR !!!
 * 
 * FEEL FREE TO CREATE ANY PULL REQUESTS
*/

namespace RideWGang
{
    public class Main : Script
    {
        #region variables
        private ScriptSettings Config = ScriptSettings.Load("scripts//gang_ride.ini");
        Ped[] crew = new Ped[0];
        string characterVoice = "ARTHUR";

        Keys spawnKey = Keys.G, dismissKey = Keys.N, recruitKey=Keys.R, taskKey= Keys.F;
                
        bool development = true;
        bool isonjob = false;
        bool active = false,
            inmortal = false,
            fx1 = false,
            fx2 = false,
            fx3 = false;

        Ped fx4 = null;
        #endregion

        public Main() {
            KeyDown += OnKeyDown;
            Tick += OnTick;
            Interval = 1000;

            readKeysConfig();
        }

        private void OnTick(object sender, EventArgs e)
        {
            if (active)
            {
                #region cover
                if (Game.Player.Character.IsInCover() && !isonjob)
                {
                    foreach (Ped p in crew)
                    {
                        if (!p.IsGoingIntoCover && !p.IsInCover())
                        {
                            Function.Call(Hash.TASK_SEEK_COVER_FROM_PED, p, p, -1, false);
                        }
                    }
                    RDR2.Script.Wait(11000);
                }
                else if (!Game.Player.Character.IsInCover() && !isonjob)
                {
                    foreach (Ped p in crew)
                    {
                        if (p.IsInCover())
                        {
                            p.Task.ClearAll();
                            pedcore(p);
                        }
                    }
                }
                #endregion

                #region companion-core
                foreach (Ped p in crew)
                {
                    if (p.IsInAir)
                    {
                        p.IsInvincible = true;
                    }
                    else
                    {
                        p.IsInvincible = inmortal;
                    }
                    
                    if (p.Position.DistanceTo(Game.Player.Character.Position) > 100 && !isonjob && p.IsAlive)
                    {
                        p.Position = Game.Player.Character.Position.Around(100);
                    }
                    else if (p.Position.DistanceTo(Game.Player.Character.Position) < 21)
                    {
                        pedcore(p);
                    }
                    else if (!isonjob)
                    {
                        p.AlwaysKeepTask = false;
                        p.Task.FollowToEntity(Game.Player.Character, 1000f, new Vector3(4f, 4f, 4f), 1000);
                    }
                }
                #endregion

                #region crouch
                if (Function.Call<bool>(Hash._0xD5FE956C70FF370B, Game.Player.Character))
                {
                    fx2 = true;
                    foreach (Ped p in crew)
                    {
                        if (!Function.Call<bool>(Hash._0xD5FE956C70FF370B, p))
                        {
                            Function.Call(Hash._0x7DE9692C6F64CFE8, p, true, true, false);
                        }
                    }
                }
                else if(fx2 && !Function.Call<bool>(Hash._0xD5FE956C70FF370B, Game.Player.Character))
                {
                    foreach (Ped p in crew)
                    {
                        Function.Call(Hash._0x7DE9692C6F64CFE8, p, false, true, false);
                    }
                    fx2 = false;
                }
                #endregion

                #region horsemount
                if (!fx1 && Game.Player.Character.IsOnHorse && !isonjob)
                {
                    foreach (Ped p in crew)
                    {
                        if (p.IsAlive)
                        {
                            while (p.Position.DistanceTo(Game.Player.Character.Position) < 35 && !p.IsOnHorse) RDR2.Script.Wait(0);
                            pedcore(p);
                        }
                    }
                    fx1 = true;
                }
                else if (!Game.Player.Character.IsOnHorse && !isonjob)
                {
                    fx1 = false;
                    foreach (Ped p in crew)
                    {
                        if (p.IsOnHorse)
                        {
                            p.Task.ClearAll();
                            p.Task.DismountAnimal(p.CurrentMount);
                        }
                    }
                    foreach (Ped p in crew)
                    {
                        while (p.IsOnHorse) RDR2.Script.Wait(0);
                        pedcore(p);
                    }
                }
                #endregion

                #region scenarios
                if (Function.Call<bool>(Hash.IS_PED_USING_ANY_SCENARIO, Game.Player.Character) && !isonjob)
                {
                    fx3 = true;
                    foreach (Ped p in crew)
                    {
                        if (!Function.Call<bool>(Hash.IS_PED_USING_ANY_SCENARIO, p))
                            Function.Call(Hash._TASK_USE_NEAREST_SCENARIO_TO_COORD, p, p.Position.X, p.Position.Y, p.Position.Z, 100.0f, -1, true, true, true, true);
                    }
                }
                else if (fx3 && !Function.Call<bool>(Hash.IS_PED_USING_ANY_SCENARIO, Game.Player.Character) && !isonjob)
                {
                    foreach (Ped p in crew)
                    {
                        p.Task.ClearAll();
                    }
                    fx3 = false;
                }
                #endregion

                #region job
                if (fx4 == null || !fx4.Exists())
                {
                    pedcore(fx4);
                    isonjob = false;
                }

                if (isonjob)
                {
                    foreach (Ped p in crew)
                    {
                        fx4.Task.Wait(10);
                    }
                }
                #endregion

                #region vehicle
                /*
                if (!fx1 && Game.Player.Character.IsInVehicle() && !isonjob)
                {
                    int i = 0;
                    RDR2.Script.Wait(1000);
                    foreach (Ped p in crew)
                    {
                        if (p.IsAlive && p.Position.DistanceTo(Game.Player.Character.Position) < 35 && !p.IsInVehicle() && !p.IsOnHorse)
                        {
                            if (Function.Call<bool>(Hash.ARE_ANY_VEHICLE_SEATS_FREE, Game.Player.Character.CurrentVehicle))
                            {
                                if (i<15 && Game.Player.Character.CurrentVehicle.IsSeatFree(i++))
                                    p.Task.EnterVehicle(Game.Player.Character.CurrentVehicle, (RDR2.VehicleSeat)i, 10000);

                            }
                            else
                            {
                                Ped horse = RDR2.World.CreatePed(new Model("A_C_Horse_Morgan_Bay"), p.Position.Around(25), 0.0f, false, false);
                                horse.RandomizeOutfit();
                                p.Task.MountAnimal(horse);
                            }
                            pedcore(p);
                        }
                    }
                    fx1=true;
                }
                else if (!Game.Player.Character.IsInVehicle() && !isonjob)
                {
                    fx1 = false;
                    foreach (Ped p in crew)
                    {
                        if (p.IsInVehicle())
                        {
                            p.Task.ClearAll();
                            p.Task.LeaveVehicle();
                        }
                    }
                    foreach (Ped p in crew)
                    {
                        while (p.IsInVehicle()) RDR2.Script.Wait(0);
                        pedcore(p);
                    }
                }
                */
                #endregion
            }
            else
            {
                foreach (Ped p in crew)
                {
                    if (p.Position.DistanceTo(Game.Player.Character.Position) > 300)
                    {
                        p.Delete();
                    }
                }
            }

            #region debug overlay
            /*Function.Call(Hash._0x8509B634FBE7DA11, "STRING");
            Function.Call(
                Hash._ADD_TEXT_COMPONENT_STRING,
                "ride_w_gang_mod_by_terk\nFPS: " +
                Game.FPS.ToString() +
                "\npeds: " + World.GetNearbyPeds(Game.Player.Character, 200f).Length.ToString() +
                "\nvehicles: " + World.GetNearbyVehicles(Game.Player.Character, 200f).Length.ToString()
            );
            Function.Call(Hash._0x238FFE5C7B0498A6, 0, 0, 0, -1);*/
            #endregion

            #region player voice
            if (Game.Player.Character.Model.Hash == 1944593012)
            {
                characterVoice = "DUTCH";
            }
            else if (Game.Player.Character.Model.Hash == 11966224)
            {
                characterVoice = "JOHN_PLAYER";
            }
            else
            {
                characterVoice = "ARTHUR";
            }
            Game.Player.Character.Voice = characterVoice;
            #endregion
        }

        private void OnKeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == spawnKey && !Game.Player.Character.IsOnHorse)
            {
                delt();
                active = true;
                setup();
            }
            else if (e.KeyCode == dismissKey)
            {
                fx4 = null;
                fx4 = (Ped)entityAimed();
                bool isSingle = false;

                foreach (Ped p in crew)
                {
                    if (fx4 == p)
                    {
                        isSingle = true;
                    } 
                }

                if (isSingle)
                {
                    dismissPed(new Ped[] { fx4 });
                }
                else
                {
                    active = false;
                    dismissPed(crew);
                }
            }
            else if (e.KeyCode == recruitKey)
            {
                #region recruit ped
                Ped target = (Ped)entityAimed();
                if (target.Exists() && target.IsHuman && !target.IsPlayer)
                {
                    active = true;
                    Ped dx = createped(target.Model, target.Position, target.Heading);
                    dx.Outfit = Function.Call<int>(Hash._0x10C70A515BC03707, target);
                    dx.Weapons.Give((uint)target.Weapons.Current.Hash, target.Weapons.Current.Ammo, false, true);
                    
                    target.Delete();

                    dx.LeaveGroup();
                    dx.Task.ClearAllImmediately();
                    
                    dx.AddBlip(BlipType.CompanionGray);
                    dx.CurrentBlip.Label = "Recruit";

                    string voiceLine = "GREET_EVENING";

                    if (characterVoice == "DUTCH")
                    {
                        voiceLine = "HOWS_IT_GOING";
                    }

                    File.WriteAllText(Environment.CurrentDirectory + "/ride_tmp", "VOICEDATA," + voiceLine + "," + characterVoice);
                    RDR2.Script.Wait(1000);
                    File.Delete(Environment.CurrentDirectory + "/ride_tmp");

                    pedcore(dx);
                }
                #endregion
            }
            else if (e.KeyCode == taskKey && !Function.Call<bool>(Hash.IS_AIM_CAM_ACTIVE))
            {
                #region select ped to order
                fx4 = null;
                Ped d = (Ped)entityAimed();
                foreach (Ped p in crew)
                {
                    if (d == p)
                    {
                        fx4 = p;
                        if (isonjob)
                        {
                            isonjob = false;
                        }
                        else
                        {
                            fx4.Task.Whistle();
                            isonjob = true;
                        }
                    }
                }
                #endregion
            }
            else if (e.KeyCode == taskKey && Function.Call<bool>(Hash.IS_AIM_CAM_ACTIVE))
            {
                #region assign job
                if (fx4!=null && fx4.Exists() && fx4.IsAlive && isonjob)
                {
                    fx4.LeaveGroup();
                    if (Function.Call<bool>(Hash._0xD5FE956C70FF370B, Game.Player.Character))
                    {
                        //fx5 = fx4.Weapons;
                        //Function.Call(Hash.REMOVE_ALL_PED_WEAPONS, fx4, true, true);
                    }
                    fx4.Task.FightAgainst((Ped)entityAimed());
                    fx4 = null;
                }
                else if (fx4 != null && fx4.Exists() && !fx4.IsAlive)
                {
                    fx4 = null;
                }
                #endregion
            }

            if (development) {
                if (e.KeyCode == Keys.X) {
                    //Function.Call(Hash._PLAY_AMBIENT_SPEECH1, Game.Player.Character, "GENERIC_GOODBYE", "JOHN_PLAYER", "SPEECH_PARAMS_STANDARD", 0);
                    /*ScriptedSpeechParams parameters = new ScriptedSpeechParams();
                    parameters.speechName = "GENERIC_GOODBYE";
                    parameters.voiceName = "JOHN_PLAYER";
                    parameters.v3 = 1;
                    parameters.speechParamHash = (uint)0x67F3AB43;
                    parameters.entity = 0;
                    parameters.v6 = true;
                    parameters.v7 = 1;
                    parameters.v8 = 1;*/
                }
                if (e.KeyCode == Keys.Z) {
                    foreach (Ped p in RDR2.World.GetAllPeds())
                    {
                        p.Delete();
                    }
                }
            }
        }

        void delt()
        {
            foreach (Ped p in crew)
            {
                p.Delete();
            }
            crew = new Ped[0];
        }
        
        void dismissPed(Ped[] crew)
        {
            foreach (Ped p in crew)
            {
                if (p.Exists())
                {
                    p.AlwaysKeepTask = false;

                    p.Task.ClearAll();
                    p.LeaveGroup();
                    Function.Call(Hash.SET_PED_AS_GROUP_MEMBER, p, 0);

                    p.CurrentBlip.Delete();

                    p.AlwaysKeepTask = true;
                    p.Task.RunTo(Game.Player.Character.Position.Around(100));
                }
            }

            File.WriteAllText(Environment.CurrentDirectory + "/ride_tmp", "VCOM,GENERIC_GOODBYE," + characterVoice);
            RDR2.Script.Wait(1000);
            File.Delete(Environment.CurrentDirectory + "/ride_tmp");

            RDR2.Script.Wait(10000);
            foreach (Ped p in crew)
            {
                if (p.Exists())
                {
                    p.Task.ClearAllImmediately();
                    p.Task.KnockOut(90.0f,false);
                    p.FreezePosition = true;
                    p.Detach();
                }
            }
            RDR2.Script.Wait(5000);
            foreach (Ped p in crew)
            {
                if (p.Exists())
                {
                    p.Delete();
                }
            }
        }

        private void acwnames(ref string[] p, string name)
        {
            Array.Resize(ref p, p.Length+1);
            p[p.Length - 1] = name;
        }
        
        void readKeysConfig() {
            spawnKey = Config.GetValue<Keys>("control", "spawn_key", Keys.G);
            dismissKey = Config.GetValue<Keys>("control", "dismiss_key", Keys.N);
            recruitKey = Config.GetValue<Keys>("control", "recruit_key", Keys.R);
            taskKey = Config.GetValue<Keys>("control", "task_key", Keys.F);
        }

        void setup()
        {
            Ped c = null;
            bool[] groupMembersActive = new bool[18];

            int[] outfits = new int[18];
            string[] nm = new string[0];

            #region read file
            readKeysConfig();

            string clothEnviorment = Config.GetValue<string>("environment", "clothes", "swamp");
            int acc = Config.GetValue<int>("stats", "precision", 100);
            inmortal = Config.GetValue<bool>("stats", "invincible", false);

            groupMembersActive[0] = Config.GetValue<bool>("members", "dutch", true);
            groupMembersActive[1] = Config.GetValue<bool>("members", "hosea", false);
            groupMembersActive[2] = Config.GetValue<bool>("members", "john", true);
            groupMembersActive[3] = Config.GetValue<bool>("members", "uncle", false);
            groupMembersActive[4] = Config.GetValue<bool>("members", "bill", true);
            groupMembersActive[5] = Config.GetValue<bool>("members", "javier", true);
            groupMembersActive[6] = Config.GetValue<bool>("members", "sean", false);
            groupMembersActive[7] = Config.GetValue<bool>("members", "karen", false);
            groupMembersActive[8] = Config.GetValue<bool>("members", "davey", false);
            groupMembersActive[9] = Config.GetValue<bool>("members", "lenny", false);
            groupMembersActive[10] = Config.GetValue<bool>("members", "charles", false);
            groupMembersActive[11] = Config.GetValue<bool>("members", "micah", true);
            groupMembersActive[12] = Config.GetValue<bool>("members", "sadie", true);
            groupMembersActive[13] = Config.GetValue<bool>("members", "kieran", false);
            groupMembersActive[14] = Config.GetValue<bool>("members", "arthur", false);

            groupMembersActive[15] = Config.GetValue<bool>("other_members", "mary_beth", false);
            groupMembersActive[16] = Config.GetValue<bool>("other_members", "tilly", false);
            groupMembersActive[17] = Config.GetValue<bool>("other_members", "trelawny", false);

            if (clothEnviorment == "custom") {
                outfits[0] = Config.GetValue<int>("custom_outfits", "dutch", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "hosea", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "john", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "uncle", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "bill", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "javier", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "sean", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "karen", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "davey", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "lenny", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "charles", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "micah", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "sadie", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "kieran", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "arthur", 0);

                outfits[1] = Config.GetValue<int>("custom_outfits", "mary_beth", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "tilly", 0);
                outfits[1] = Config.GetValue<int>("custom_outfits", "trelawny", 0);
            }
            #endregion

            #region outfits
            if (clothEnviorment == "custom") { }
            else if (clothEnviorment == "snow")
            {
                outfits[0] = 0;
                outfits[1] = 0;
                outfits[2] = 3;
                outfits[3] = 0;
                outfits[4] = 0;
                outfits[5] = 0;
                outfits[6] = 3;
                outfits[7] = 1;
                outfits[9] = 0;
                outfits[10] = 2;
                outfits[11] = 0;
                outfits[12] = 13;
                outfits[13] = 0;
                outfits[14] = 1;
                outfits[15] = 0;
                outfits[16] = 1;
                outfits[17] = 2;
            }
            else if (clothEnviorment == "heartlands")
            {
                outfits[0] = 15;
                outfits[1] = 2;
                outfits[2] = 15;
                outfits[3] = 6;
                outfits[4] = 12;
                outfits[5] = 17;
                outfits[6] = 0;
                outfits[7] = 12;
                outfits[9] = 2;
                outfits[10] = 18;
                outfits[11] = 20;
                outfits[12] = 3;
                outfits[13] = 4;
                outfits[14] = 0;
                outfits[15] = 2;
                outfits[16] = 9;
                outfits[17] = 7;
            }
            else if (clothEnviorment == "mountains")
            {
                outfits[0] = 1;
                outfits[1] = 1;
                outfits[2] = 0;
                outfits[3] = 1;
                outfits[4] = 10;
                outfits[5] = 1;
                outfits[6] = 3;
                outfits[7] = 3;
                outfits[9] = 6;
                outfits[10] = 3;
                outfits[11] = 18;
                outfits[12] = 17;
                outfits[13] = 1;
                outfits[14] = 2;
                outfits[15] = 1;
                outfits[16] = 2;
                outfits[17] = 1;
            }
            else if (clothEnviorment == "desert")
            {
                outfits[0] = 3;
                outfits[1] = 7;
                outfits[2] = 21;
                outfits[3] = 2;
                outfits[4] = 15;
                outfits[5] = 2;
                outfits[6] = 10;
                outfits[7] = 14;
                outfits[9] = 10;
                outfits[10] = 7;
                outfits[11] = 21;
                outfits[12] = 8;
                outfits[13] = 8;
                outfits[14] = 0;
                outfits[15] = 6;
                outfits[16] = 8;
                outfits[17] = 3;
            }
            else if (clothEnviorment == "swamp")
            {
                outfits[0] = 16;
                outfits[1] = 8;
                outfits[2] = 5;
                outfits[3] = 6;
                outfits[4] = 1;
                outfits[5] = 19;
                outfits[6] = 0;
                outfits[7] = 13;
                outfits[9] = 9;
                outfits[10] = 16;
                outfits[11] = 2;
                outfits[12] = 19;
                outfits[13] = 7;
                outfits[14] = 3;
                outfits[15] = 7;
                outfits[16] = 7;
                outfits[17] = 9;
            }

            else if (clothEnviorment == "guarma")
            {
                outfits[0] = 11;
                outfits[4] = 8;
                outfits[5] = 11;
                outfits[11] = 14;
                outfits[14] = 11;

                groupMembersActive[1] = false;
                groupMembersActive[2] = false;
                groupMembersActive[3] = false;
                groupMembersActive[6] = false;
                groupMembersActive[7] = false;
                groupMembersActive[8] = false;
                groupMembersActive[9] = false;
                groupMembersActive[10] = false;
                groupMembersActive[12] = false;
                groupMembersActive[13] = false;
                groupMembersActive[15] = false;
                groupMembersActive[16] = false;
                groupMembersActive[17] = false;
            }

            #endregion

            #region companions
            if (groupMembersActive[0])
            {
                c = createped(new Model("CS_dutch"));
                c.Outfit = outfits[0];
                acwnames(ref nm, "Dutch");
                c.Voice = "DUTCH";

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeDutch, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverSchofieldDutchDualwield, 3444, false, true);
            }
            if (groupMembersActive[1])
            {
                c = createped(new Model("CS_hoseamatthews"));
                c.Outfit = outfits[1];
                acwnames(ref nm, "Hosea");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeHosea, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanHoseaDualwield, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.ShotgunSemiautoHosea, 3444, false, true);
            }
            if (groupMembersActive[2])
            {
                c = createped(new Model("CS_johnmarston"));
                c.Outfit = outfits[2];
                acwnames(ref nm, "John");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeJohn, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanJohn, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.RepeaterWinchesterJohn, 3444, false, true);
            }
            if (groupMembersActive[3])
            {
                c = createped(new Model("CS_uncle"));
                c.Outfit = outfits[3];
                acwnames(ref nm, "Uncle");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeUncle, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverSchofieldUncle, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.ShotgunDoublebarrelUncle, 3444, false, true);
            }
            if (groupMembersActive[4])
            {
                c = createped(new Model("CS_billwilliamson"));
                c.Outfit = outfits[4];
                acwnames(ref nm, "Bill");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeBill, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverSchofieldBill, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.RifleBoltactionBill, 3444, false, true);
            }
            if (groupMembersActive[5])
            {
                c = createped(new Model("CS_javierescuella"));
                c.Outfit = outfits[5];
                acwnames(ref nm, "Javier");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeJavier, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.ThrownThrowingKnivesJavier, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverDoubleactionJavier, 3444, false, true);
            }
            if (groupMembersActive[6])
            {
                c = createped(new Model("CS_sean"));
                c.Outfit = outfits[6];
                acwnames(ref nm, "Sean");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeSean, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanSean, 3444, false, true);
            }
            if (groupMembersActive[7])
            {
                c = createped(new Model("CS_karen"));
                c.Outfit = outfits[7];
                acwnames(ref nm, "Karen");

                c.Weapons.Give((uint)WeaponHash.MeleeKnife, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (groupMembersActive[8])
            {
                c = createped(new Model("CS_DaveyCallender"));
                acwnames(ref nm, "Davey");

                c.Weapons.Give((uint)WeaponHash.MeleeKnife, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (groupMembersActive[9])
            {
                c = createped(new Model("CS_lenny"));
                c.Outfit = outfits[9];
                acwnames(ref nm, "Lenny");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeLenny, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanLenny, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.SniperrifleRollingblockLenny, 3444, false, true);
            }
            if (groupMembersActive[10])
            {
                c = createped(new Model("CS_charlessmith"));
                c.Outfit = outfits[10];
                acwnames(ref nm, "Charles");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeCharles, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.BowCharles, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.ShotgunSawedoffCharles, 3444, false, true);
            }
            if (groupMembersActive[11])
            {
                c = createped(new Model("CS_MicahBell"));
                c.Outfit = outfits[11];
                acwnames(ref nm, "Micah");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeMicah, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverDoubleactionMicahDualwield, 3444, false, true);
            }
            if (groupMembersActive[12])
            {
                c = createped(new Model("CS_mrsadler"));
                c.Outfit = outfits[12];
                acwnames(ref nm, "Sadie");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeSadie, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanSadieDualwield, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.RepeaterCarbineSadie, 3444, false, true);
            }
            if (groupMembersActive[13])
            {
                c = createped(new Model("CS_kieran"));
                c.Outfit = outfits[13];
                acwnames(ref nm, "Kieran");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeKieran, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanKieran, 3444, false, true);
            }
            if (groupMembersActive[14])
            {
                c = createped(new Model("player_zero"));
                c.Outfit = outfits[14];
                acwnames(ref nm, "Arthur");
                c.Voice = "ARTHUR";

                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (groupMembersActive[15])
            {
                c = createped(new Model("CS_marybeth"));
                c.Outfit = outfits[15];
                acwnames(ref nm, "Mary Beth");

                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (groupMembersActive[16])
            {
                c = createped(new Model("CS_tilly"));
                c.Outfit = outfits[16];
                acwnames(ref nm, "Tilly");

                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (groupMembersActive[17])
            {
                c = createped(new Model("CS_josiahtrelawny"));
                c.Outfit = outfits[17];
                acwnames(ref nm, "Trelawny");

                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            #endregion

            Function.Call(Hash.SET_PED_AS_GROUP_LEADER, Game.Player.Character, Function.Call<int>(Hash.GET_PED_GROUP_INDEX, Game.Player.Character.Handle), true);
            Function.Call(Hash.TASK_PERSISTENT_CHARACTER, Game.Player.Character);

            int x = 0;
            foreach (Ped cp in crew)
            {
                cp.SetPedPromptName(nm[x]);

                cp.IsInvincible = inmortal;
                cp.Accuracy = acc;

                cp.AddBlip(BlipType.CompanionGray);
                cp.CurrentBlip.Label = nm[x];
                
                pedcore(cp);
                x++;
            }
        }
        
        void pedcore(Ped cp)
        {
            Function.Call(Hash.TASK_PERSISTENT_CHARACTER, cp);
            Function.Call(Hash.SET_PED_SEEING_RANGE, cp, 9000.0f);
            Function.Call(Hash.SET_PED_SEEING_RANGE, cp, 9000.0f);
            Function.Call(Hash.SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE, cp, 9000.0f);
            Function.Call(Hash.SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE, cp, 9000.0f);
            Function.Call(Hash.SET_PED_RELATIONSHIP_GROUP_HASH, cp, 0xA448EF1C);
            Function.Call(Hash.SET_PED_AS_GROUP_MEMBER, cp, Function.Call<int>(Hash.GET_PED_GROUP_INDEX, Game.Player.Character.Handle));
        }
        
        private Ped createped(Model m, Vector3 pos = default, float headg = 0.0f)
        {
            Ped c;
            if (pos == default)
                c = RDR2.World.CreatePed(m, Game.Player.Character.Position.Around(50), 0, false, false);
            else
                c = RDR2.World.CreatePed(m, pos, headg, false, false);

            Array.Resize(ref crew, crew.Length + 1);
            crew[crew.Length - 1] = c;
            return c;
        }

        Entity entityAimed()
        {
            Vector3 camPos = Function.Call<Vector3>(Hash.GET_GAMEPLAY_CAM_COORD);
            Vector3 camRot = Function.Call<Vector3>(Hash.GET_GAMEPLAY_CAM_ROT);
            float retz = camRot.Z * 0.0174532924F;
            float retx = camRot.X * 0.0174532924F;
            float absx = (float)Math.Abs(Math.Cos(retx));
            Vector3 camStuff = new Vector3((float)Math.Sin(retz) * absx * -1, (float)Math.Cos(retz) * absx, (float)Math.Sin(retx));
            RaycastResult ray = World.Raycast(camPos, camPos + camStuff * 1000, IntersectOptions.Everything);
            return ray.HitEntity;
        }
    }
}
