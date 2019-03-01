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
	char string[500],substring[50],replacement[50];
	int same,i,k,c;
	scanf("%s%s%s",string,substring,replacement);
	for (i=0;i<strlen(string);i++)
	{
		same=1;
		for (k=0;k<strlen(substring);k++)
		{
			if (string[i+k]!=substring[k])
			{
				same=0;
			}
		}
		if(same==1)
		{
			printf("%s",replacement);
			c=i;
			break;
		}
		else
		{
			printf("%c",string[i]);
		}
	
	}
	for(i=c+strlen(substring);i<strlen(string);i++)
	{
		printf("%c",string[i]);
	}
	return 0;
}