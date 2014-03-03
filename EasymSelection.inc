
#include <a_samp.inc>
#include <mSelection.inc>

#if !defined EasymSelection_DEBUG
	#define EasymSelection_DEBUG false
#endif

#define EasymSelection_LENGTH 10

new str_[EasymSelection_LENGTH];

#define menuEx(%1) \
	forward OPMSEx_%1(playerid, response, extraid, modelid);\
	public OPMSEx_%1(playerid, response, extraid, modelid)	

#define menu(%1) \
	forward OPMS_%1(playerid, response, listid, modelid);\
	public OPMS_%1(playerid, response, listid, modelid)		

public OnPlayerModelSelectionEx(playerid, response, extraid, modelid)
{
	#if defined EasymSelection_DEBUG true
	printf("OnPlayerModelSelectionEx(%i, %d, %d, %d)", playerid, response, extraid, modelid);
	#endif

	format(str_, sizeof(str_), "OPMSEx_%d", extraid);
    #if defined iZN_OnPlayerModelSelectionEx
        iZN_OnPlayerModelSelectionEx(playerid, response, extraid, modelid);
    #endif
	return CallLocalFunction(str_, "iii", playerid, response, modelid);
}
#if defined _ALS_OnPlayerModelSelectionEx
    #undef OnPlayerModelSelectionEx
#else
    #define _ALS_OnPlayerModelSelectionEx
#endif
#define OnPlayerModelSelectionEx iZN_OnPlayerModelSelectionEx
#if defined iZN_OnPlayerModelSelectionEx
    forward iZN_OnPlayerModelSelectionEx(playerid, response, extraid, modelid);
#endif

public OnPlayerModelSelection(playerid, response, listid, modelid)
{
	#if defined EasymSelection_DEBUG true
	printf("OnPlayerModelSelection(%i, %d, %d, %d)", playerid, response, listid, modelid);
	#endif

	format(str_, sizeof(str_), "OPMS_%d", listid);
    #if defined iZN_OnPlayerModelSelection
        iZN_OnPlayerModelSelection(playerid, response, listid, modelid);
    #endif
	return CallLocalFunction(str_, "iii", playerid, response, modelid);
}
#if defined _ALS_OnPlayerModelSelection
    #undef OnPlayerModelSelection
#else
    #define _ALS_OnPlayerModelSelection
#endif
#define OnPlayerModelSelection iZN_OnPlayerModelSelection
#if defined iZN_OnPlayerModelSelection
    forward iZN_OnPlayerModelSelection(playerid, response, listid, modelid);
#endif