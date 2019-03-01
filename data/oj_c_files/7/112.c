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
	char str[256];
	char sta[256];
	char stb[256];
	char res[512] = "";

	gets(str);
	gets(sta);
	gets(stb);
	
	char* a = str;
	char* b = 0;

	if(b=strstr(a,sta))
	{
		strncat(res,a,b-a);
		strcat(res,stb);
		a = b+strlen(sta);
	}

	strcat(res,a);

	printf("%s\n",res);

	return 0;
}