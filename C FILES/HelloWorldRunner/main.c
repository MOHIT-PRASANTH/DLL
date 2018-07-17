#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	HINSTANCE hinstDLL;
	hinstDLL = LoadLibrary("HelloWorld.dll");
	if(hinstDLL!=0)
	{
	  char * (*hello) (char *);
      void (*helloworld) ();
      hello =  GetProcAddress(hinstDLL, "hello");
      helloworld =  GetProcAddress(hinstDLL, "helloworld");
 
      printf("%s\n", hello("mohit"));
      helloworld();
 
      FreeLibrary(hinstDLL);
	}
	return 0;
}
