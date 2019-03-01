#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main() 
{ 
	char string[256];
	char substring[256];
	char replacement[256];
	int x;
	gets(string);
	gets(substring);
	gets(replacement);
	x=strstr(string,substring)-&string[0];
	if(strchr(string,substring[0])!=0)memmove(string+x,replacement,strlen(replacement));
	printf("%s",string);
	return 0;
}

