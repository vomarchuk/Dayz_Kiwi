//This file was created to make a "Multi Server" setup possible. Change mission and map for this server if needed. 
//Modify between "$CurrentDir:\\mpmissions\\      and 		\\SurvivorMissionModule\\...
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\SurvivorMissionModule\\EventsWorldData.c"
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\SurvivorMissionModule\\Missions\\RandomItemsList.c"
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\SurvivorMissionModule\\Missions\\Missions.h"

class MissionSettings
{	
	//Survivor Stories path (Do not change unless you are using a different folder name!) The second part of the file name gets added by SMM internally
	static string StoriesFilePath = "$profile:\\SurvivorMissions\\SurvivorStories_";
	
	//DebugMode ( Useful for creating your own missions )
	const bool DebugMode = 0;				//1 = Enables debug functions and advanced script logging
	const bool DebugShowInfo = true;			//1 = Displays additional information on the client in debug mode
	const bool DebugRCbuild = false;			//1 = Raycast map after server start for desired building type, prints all found buildings to script log	
	const string RCbuildType = "Land_City_School";					//Building type for map wide raycast
	const bool CheckEWD = false;				//1 = Performs a check on MissionBuildings of events data at server start. Disable when check ran once successfully
	
	const int DebugMission = -1;				//select mission by number (array index of EWD), set -1 to let SurvivorMissionModule select the mission
	
	//Mission options
	static bool Opt_OnStartCleanUp = true;		//1 = Clean up previous mission position from any items at server start, 0 = deactivate OnStartCleanUp
	static bool Opt_BuildStatics = false;		//1 = Spawn additional static buildings on startup(check EventsWorldData file), 0 = deploy only missions 
	static bool Opt_SendStoryOnDisconn = true;	//1 = Player gets SurvivorStories displayed in main menu after disconnecting, 0 = deactivate SurvivorStories 
	static bool Opt_DenyObjTakeaway = true;		//1 = mission object container gets deleted if manipulated, 0 = allow takeaway
	static bool Opt_MsgTypeRadio = true; 		//1 = messages on radio for listeners only, 0 = server message broadcast to all clients
	static bool Opt_ServerMsgFreq = true;		//1 = server informs all players of radio frequency, 0 = deactivate radio frequency information
												// ( You can also use server MOTD instead! )  
	static bool Opt_RPmode = false;				//1 = chronological mission selection for role play purposes, 0 = random mission selection 
	static ref TIntArray Opt_RPlist = {0,130};
	//insert your chronological mission selection by the mission number (array index in EWD)
	
	//Module messages (you can translate into your language)
	static string ZoneEnterMsg = "Ви увійшли в зону місії!";
	static string TimeLeftMsg = " залишилося хвилин до завершення місії.";	//keep first character as space
	static string ZoneLeaveMsg = "Ви залишили зону місії!";	
	static string StartingMsg = "Мене хтось чує?";	//(Message 0)
	static string TargetFoundMsg = "Ви знайшли ціль!";
	static string Message3Ext = " залишилось хвилин.";		//keep first character as space
	static string FinishingMsg = "Дякую тобі за вирішення проблеми.\nЯ повідомлятиму тобі про інші завдання на цьому радіоканалі.\nУдачі!";	//(Message -1)
	static string TimeoutMsg = "Мені дуже шкода, але ви запізнилися!\nЯ повідомлятиму тобі про інші завдання на цьому радіоканалі.\nХай щастить!";	//(Message -2)
	
	//Mission module settings
	static int DelayTime = 360;					//seconds (!Do not set lower than 300 seconds), delay time of first and between previous and next mission
	static int CleanUpDlyTime = 180;			//seconds (!Do not set lower than 180 seconds), delay time of OnStartCleanup executed once after mpmission is loaded by the server
	static int MsgFreqDlyTime = 1800;			//seconds (!Do not set lower than 900 seconds), radio frequency information delay time 
	static float RadioFrequency = 99.7;			//Mhz (!Do only set a frequency from channels used ingame), radio frequency of mission channel	
	static int MsgWaitTime = 300;				//seconds (!Do not set lower than 300 seconds), message interval, cycle duration time
	static int MsgCutoffTime = 2;				//minutes, time of messaging cutoff before mission ends 	
	
	static string GetStoriesFilePath() return StoriesFilePath;
	
	static float GetRadioFrequency() return RadioFrequency;	
	//This function can be changed, if you want maybe a random frequency at server start...
/*
	static float GetRadioFrequency()
	{
		TFloatArray TransmitterChannels = {87.8, 89.5, 91.3, 91.9, 94.6, 96.6, 99.7, 102.5};
		return TransmitterChannels.GetRandomElement();
	}
*/	
}