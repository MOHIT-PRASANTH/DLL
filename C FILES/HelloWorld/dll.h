#ifndef _DLL_H_
#define _DLL_H_

#define DLL_EXPORT __declspec(dllexport)

	char * DLL_EXPORT hello(char *user);
	void DLL_EXPORT helloworld();

#endif
