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

void main()
{
	char string[300],substring[300],replacement[300],test[300];
	int lensub,len,i,j;
	scanf("%s\n%s\n%s",string,substring,replacement);
	len=strlen(string);
	lensub=strlen(substring);
	for(i=0;i<=len-lensub;i++)
	{
		for(j=1;j<=lensub;j++)
		{
			test[j-1]=string[i+j-1];
			test[j]='\0';
		}
		if(strcmp(test,substring)!=0)
		{
			printf("%c",string[i]);
		}
		else
		{
			printf("%s",replacement);
			i+=lensub;
			break;
		}
	}
	for(;i<=len-1;i++)
	{
		printf("%c",string[i]);
	}
}