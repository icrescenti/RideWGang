#include "script.h"
#include "keyboard.h"

#include <unordered_map>
#include <vector>
#include <string>
#include <ctime>

#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

#include "scriptinfo.h"

std::string workingdir()
{
	char buf[256];
	GetCurrentDirectoryA(256, buf);
	return std::string(buf) + '\\';
}

//PARAMETERS TO SPEECH
struct ScriptedSpeechParams
{
	const char* speechName;
	const char* voiceName;
	alignas(8) int v3;
	alignas(8) Hash speechParamHash;
	alignas(8) Entity entity;
	alignas(8) BOOL v6;
	alignas(8) int v7;
	alignas(8) int v8;
};

static_assert(sizeof(ScriptedSpeechParams) == 0x40, "incorrect ScriptedSpeechParams size");

//CHECKS IF FILE EXISTS
inline bool fExists(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

std::string delimiter = ",";

//Main function
void main()
{
	while (true)
	{
		if (fExists(workingdir() + "/ride_tmp"))
		{
			std::ifstream ifs("ride_tmp");
			std::string content((std::istreambuf_iterator<char>(ifs)),
				(std::istreambuf_iterator<char>()));


			char delimeter = ',';
			std::stringstream ss(content);
			std::string item;
			std::vector<std::string> splittedStrings;

			while (std::getline(ss, item, delimeter))
			{
				splittedStrings.push_back(item);
			}

			if (splittedStrings[0] == "VOICEDATA")
			{
				ScriptedSpeechParams params{ splittedStrings[1].c_str(), splittedStrings[2].c_str(), 1, 0x67F3AB43, 0, true, 1, 1 };
				AUDIO::_PLAY_AMBIENT_SPEECH1(PLAYER::PLAYER_PED_ID(), (char*)&params);
			}
		}
		WAIT(1000);
	}
}

void ScriptMain()
{
	srand(GetTickCount());
	main();
}