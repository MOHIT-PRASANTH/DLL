/* Replace "dll.h" with the name of your header */
#include "dll.h"
#include <windows.h>

char * DLL_EXPORT hello(char * user){
	char * greetings = malloc(sizeof(char)*100);
	sprintf(greetings,"Hello %s\n",user);
	return greetings;
}

void DLL_EXPORT helloworld(){
	printf("Hello World\n");		
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved)
{
	switch(fdwReason)
	{
		case DLL_PROCESS_ATTACH:
		{
			break;
		}
		case DLL_PROCESS_DETACH:
		{
			break;
		}
		case DLL_THREAD_ATTACH:
		{
			break;
		}
		case DLL_THREAD_DETACH:
		{
			break;
		}
	}
	
	/* Return TRUE on success, FALSE on failure */
	return TRUE;
}
