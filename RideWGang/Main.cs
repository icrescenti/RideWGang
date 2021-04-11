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
 * Created by Terk
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
        Ped[] crew = new Ped[0];
        
        string key = "G", dkey = "N", rkey="R", akey= "f";
        
        string voic = "ARTHUR";
        
        bool isonjob = false;
        bool active = false,
            inmortal = false,
            fx1 = false,
            fx2 = false,
            fx3 = false;

        Ped fx4 = null;
        #endregion

        #region constructor
        public Main()
        {
            //JSON Serialization TODO
            #region initial conf read
            if (File.Exists(Environment.CurrentDirectory + "\\gang_ride.ini"))
            {
                using (StreamReader sr = new StreamReader(Environment.CurrentDirectory + "\\gang_ride.ini"))
                {
                    sr.ReadLine();
                    key = sr.ReadLine().Split('=')[1];
                    dkey = sr.ReadLine().Split('=')[1];
                    rkey = sr.ReadLine().Split('=')[1];
                }
            }
            #endregion

            KeyDown += OnKeyDown;
            Tick += OnTick;

            Interval = 1000;
        }
        #endregion

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

                /*
                #region vehicle
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
                #endregion
                */
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

            #region player things

            if (Game.Player.Character.Model.Hash == 1944593012)
            {
                voic = "DUTCH";
            }
            else if (Game.Player.Character.Model.Hash == 11966224)
            {
                voic = "JOHN_PLAYER";
            }
            else
            {
                voic = "ARTHUR";
            }
            Game.Player.Character.Voice = voic;

            #endregion
        }

        private void OnKeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode.ToString().ToUpper() == key.ToUpper() && !Game.Player.Character.IsOnHorse)
            {
                delt();
                Menuse();
                active = true;
                setup();
            }
            else if (e.KeyCode.ToString().ToUpper() == dkey.ToUpper())
            {
                fx4 = null;
                fx4 = (Ped)entaimed();
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
                    dimisscp(new Ped[] { fx4 });
                }
                else
                {
                    active = false;
                    dimisscp(crew);
                }
            }
            else if (e.KeyCode.ToString().ToUpper() == rkey.ToUpper())
            {
                #region recruit-ped
                Ped target = (Ped)entaimed();
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

                    string ts = "GREET_EVENING";

                    if (voic == "DUTCH")
                    {
                        ts = "HOWS_IT_GOING";
                    }

                    File.WriteAllText(Environment.CurrentDirectory + "/ride_tmp", "VOICEDATA," + ts + "," + voic);
                    RDR2.Script.Wait(1000);
                    File.Delete(Environment.CurrentDirectory + "/ride_tmp");

                    pedcore(dx);
                }
                #endregion
            }
            else if (e.KeyCode.ToString().ToUpper() == akey.ToUpper() && !Function.Call<bool>(Hash.IS_AIM_CAM_ACTIVE))
            {
                #region select ped to order
                fx4 = null;
                Ped d = (Ped)entaimed();
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
            else if (e.KeyCode.ToString().ToUpper() == akey.ToUpper() && Function.Call<bool>(Hash.IS_AIM_CAM_ACTIVE))
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
                    fx4.Task.FightAgainst((Ped)entaimed());
                    fx4 = null;
                }
                else if (fx4 != null && fx4.Exists() && !fx4.IsAlive)
                {
                    fx4 = null;
                }
                #endregion
            }


            /*
            if (e.KeyCode == Keys.X)
            {
                RDR2.UI.Screen.ShowSubtitle(Function.Call<bool>(Hash.ARE_ANY_VEHICLE_SEATS_FREE, Game.Player.Character.CurrentVehicle).ToString());
            }
            if (e.KeyCode == Keys.Z)
            {
                foreach (Ped p in RDR2.World.GetAllPeds())
                {
                    p.Delete();
                }
            }
            */
        }

        public void Menuse()
        {
            
        }
        
        void delt()
        {
            foreach (Ped p in crew)
            {
                p.Delete();
            }
            crew = new Ped[0];
        }
        
        void dimisscp(Ped[] d_crew)
        {
            foreach (Ped p in d_crew)
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

            File.WriteAllText(Environment.CurrentDirectory + "/ride_tmp", "VCOM,GENERIC_GOODBYE," + voic);
            RDR2.Script.Wait(1000);
            File.Delete(Environment.CurrentDirectory + "/ride_tmp");

            RDR2.Script.Wait(10000);
            foreach (Ped p in d_crew)
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
            foreach (Ped p in d_crew)
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
        
        void setup()
        {
            #region vars
            bool[] gm = new bool[18];

            int acc = 100;
            string env = "snow";

            Ped c = null;

            int[] otf = new int[18];

            string[] nm = new string[0];
            #endregion

            #region read file
            if (File.Exists(Environment.CurrentDirectory + "\\gang_ride.ini"))
            {
                using (StreamReader sr = new StreamReader(Environment.CurrentDirectory + "\\gang_ride.ini"))
                {
                    sr.ReadLine();
                    key = sr.ReadLine().Split('=')[1];
                    dkey = sr.ReadLine().Split('=')[1];
                    rkey = sr.ReadLine().Split('=')[1];
                    sr.ReadLine();
                    sr.ReadLine();
                    env = sr.ReadLine().Split('=')[1].ToLower();
                    sr.ReadLine();
                    sr.ReadLine();
                    gm[0] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[1] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[2] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[3] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[4] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[5] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[6] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[7] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[8] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[9] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[10] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[11] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[12] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[13] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[14] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    sr.ReadLine();
                    sr.ReadLine();
                    
                    gm[15] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[16] = bool.Parse(sr.ReadLine().Split('=')[1]);
                    gm[17] = bool.Parse(sr.ReadLine().Split('=')[1]);

                    sr.ReadLine();
                    sr.ReadLine();
                    inmortal = bool.Parse(sr.ReadLine().Split('=')[1]);
                    acc = int.Parse(sr.ReadLine().Split('=')[1]);
                    sr.ReadLine();
                    sr.ReadLine();

                    if (env == "custom")
                    {
                        for (int i = 0; i<15; i++)
                            otf[i] = int.Parse(sr.ReadLine().Split('=')[1]);

                        sr.ReadLine();

                        for (int i = 15; i < 18; i++)
                            otf[i] = int.Parse(sr.ReadLine().Split('=')[1]);
                    }
                }
            }
            #endregion

            #region outfits
            if (env == "custom") { }
            else if (env == "snow")
            {
                otf[0] = 0;
                otf[1] = 0;
                otf[2] = 3;
                otf[3] = 0;
                otf[4] = 0;
                otf[5] = 0;
                otf[6] = 3;
                otf[7] = 1;
                otf[9] = 0;
                otf[10] = 2;
                otf[11] = 0;
                otf[12] = 13;
                otf[13] = 0;
                otf[14] = 1;
                otf[15] = 0;
                otf[16] = 1;
                otf[17] = 2;
            }
            else if (env == "heartlands")
            {
                otf[0] = 15;
                otf[1] = 2;
                otf[2] = 15;
                otf[3] = 6;
                otf[4] = 12;
                otf[5] = 17;
                otf[6] = 0;
                otf[7] = 12;
                otf[9] = 2;
                otf[10] = 18;
                otf[11] = 20;
                otf[12] = 3;
                otf[13] = 4;
                otf[14] = 0;
                otf[15] = 2;
                otf[16] = 9;
                otf[17] = 7;
            }
            else if (env == "mountains")
            {
                otf[0] = 1;
                otf[1] = 1;
                otf[2] = 0;
                otf[3] = 1;
                otf[4] = 10;
                otf[5] = 1;
                otf[6] = 3;
                otf[7] = 3;
                otf[9] = 6;
                otf[10] = 3;
                otf[11] = 18;
                otf[12] = 17;
                otf[13] = 1;
                otf[14] = 2;
                otf[15] = 1;
                otf[16] = 2;
                otf[17] = 1;
            }
            else if (env == "desert")
            {
                otf[0] = 3;
                otf[1] = 7;
                otf[2] = 21;
                otf[3] = 2;
                otf[4] = 15;
                otf[5] = 2;
                otf[6] = 10;
                otf[7] = 14;
                otf[9] = 10;
                otf[10] = 7;
                otf[11] = 21;
                otf[12] = 8;
                otf[13] = 8;
                otf[14] = 0;
                otf[15] = 6;
                otf[16] = 8;
                otf[17] = 3;
            }
            else if (env == "swamp")
            {
                otf[0] = 16;
                otf[1] = 8;
                otf[2] = 5;
                otf[3] = 6;
                otf[4] = 1;
                otf[5] = 19;
                otf[6] = 0;
                otf[7] = 13;
                otf[9] = 9;
                otf[10] = 16;
                otf[11] = 2;
                otf[12] = 19;
                otf[13] = 7;
                otf[14] = 3;
                otf[15] = 7;
                otf[16] = 7;
                otf[17] = 9;
            }

            else if (env == "guarma")
            {
                otf[0] = 11;
                otf[4] = 8;
                otf[5] = 11;
                otf[11] = 14;
                otf[14] = 11;

                gm[1] = false;
                gm[2] = false;
                gm[3] = false;
                gm[6] = false;
                gm[7] = false;
                gm[8] = false;
                gm[9] = false;
                gm[10] = false;
                gm[12] = false;
                gm[13] = false;
                gm[15] = false;
                gm[16] = false;
                gm[17] = false;
            }

            #endregion

            #region companions
            if (gm[0])
            {
                c = createped(new Model("CS_dutch"));
                c.Outfit = otf[0];
                acwnames(ref nm, "Dutch");
                c.Voice = "DUTCH";

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeDutch, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverSchofieldDutchDualwield, 3444, false, true);
            }
            if (gm[1])
            {
                c = createped(new Model("CS_hoseamatthews"));
                c.Outfit = otf[1];
                acwnames(ref nm, "Hosea");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeHosea, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanHoseaDualwield, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.ShotgunSemiautoHosea, 3444, false, true);
            }
            if (gm[2])
            {
                c = createped(new Model("CS_johnmarston"));
                c.Outfit = otf[2];
                acwnames(ref nm, "John");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeJohn, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanJohn, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.RepeaterWinchesterJohn, 3444, false, true);
            }
            if (gm[3])
            {
                c = createped(new Model("CS_uncle"));
                c.Outfit = otf[3];
                acwnames(ref nm, "Uncle");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeUncle, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverSchofieldUncle, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.ShotgunDoublebarrelUncle, 3444, false, true);
            }
            if (gm[4])
            {
                c = createped(new Model("CS_billwilliamson"));
                c.Outfit = otf[4];
                acwnames(ref nm, "Bill");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeBill, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverSchofieldBill, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.RifleBoltactionBill, 3444, false, true);
            }
            if (gm[5])
            {
                c = createped(new Model("CS_javierescuella"));
                c.Outfit = otf[5];
                acwnames(ref nm, "Javier");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeJavier, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.ThrownThrowingKnivesJavier, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverDoubleactionJavier, 3444, false, true);
            }
            if (gm[6])
            {
                c = createped(new Model("CS_sean"));
                c.Outfit = otf[6];
                acwnames(ref nm, "Sean");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeSean, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanSean, 3444, false, true);
            }
            if (gm[7])
            {
                c = createped(new Model("CS_karen"));
                c.Outfit = otf[7];
                acwnames(ref nm, "Karen");

                c.Weapons.Give((uint)WeaponHash.MeleeKnife, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (gm[8])
            {
                c = createped(new Model("CS_DaveyCallender"));
                acwnames(ref nm, "Davey");

                c.Weapons.Give((uint)WeaponHash.MeleeKnife, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (gm[9])
            {
                c = createped(new Model("CS_lenny"));
                c.Outfit = otf[9];
                acwnames(ref nm, "Lenny");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeLenny, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanLenny, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.SniperrifleRollingblockLenny, 3444, false, true);
            }
            if (gm[10])
            {
                c = createped(new Model("CS_charlessmith"));
                c.Outfit = otf[10];
                acwnames(ref nm, "Charles");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeCharles, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.BowCharles, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.ShotgunSawedoffCharles, 3444, false, true);
            }
            if (gm[11])
            {
                c = createped(new Model("CS_MicahBell"));
                c.Outfit = otf[11];
                acwnames(ref nm, "Micah");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeMicah, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverDoubleactionMicahDualwield, 3444, false, true);
            }
            if (gm[12])
            {
                c = createped(new Model("CS_mrsadler"));
                c.Outfit = otf[12];
                acwnames(ref nm, "Sadie");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeSadie, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanSadieDualwield, 3444, false, true);
                c.Weapons.Give((uint)WeaponHash.RepeaterCarbineSadie, 3444, false, true);
            }
            if (gm[13])
            {
                c = createped(new Model("CS_kieran"));
                c.Outfit = otf[13];
                acwnames(ref nm, "Kieran");

                c.Weapons.Give((uint)WeaponHash.MeleeKnifeKieran, 1, false, true);
                c.Weapons.Give((uint)WeaponHash.RevolverCattlemanKieran, 3444, false, true);
            }
            if (gm[14])
            {
                c = createped(new Model("player_zero"));
                c.Outfit = otf[14];
                acwnames(ref nm, "Arthur");
                c.Voice = "ARTHUR";

                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (gm[15])
            {
                c = createped(new Model("CS_marybeth"));
                c.Outfit = otf[15];
                acwnames(ref nm, "Mary Beth");

                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (gm[16])
            {
                c = createped(new Model("CS_tilly"));
                c.Outfit = otf[16];
                acwnames(ref nm, "Tilly");

                c.Weapons.Give((uint)WeaponHash.RevolverCattleman, 3444, false, true);
            }
            if (gm[17])
            {
                c = createped(new Model("CS_josiahtrelawny"));
                c.Outfit = otf[17];
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

        Entity entaimed()
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
