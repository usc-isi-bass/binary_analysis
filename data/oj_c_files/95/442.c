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
	int i=0;
	char str1[300],str2[300];
	gets(str1);
	gets(str2);
	for(i=0;str1[i]&&str2[i];i++)
	{
		if(str1[i]>='a'&&str1[i]<='z')
		{
			str1[i]-=32;
		}
		if(str2[i]>='a'&&str2[i]<='z')
		{
			str2[i]-=32;
		}
		if(str1[i]!=str2[i])
		{
			printf((str1[i]>str2[i])?">":"<");break;
		}
	}
	if(!str1[i]&&!str2[i])
	{
		printf("=");
	}

	return 0;
}