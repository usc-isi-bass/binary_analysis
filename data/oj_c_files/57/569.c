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
	int n,i,number;
	char str1[33];
	scanf("%d",&n);
	for(i=0,number=0;i<n;i++)
	{
		scanf("%s",str1);
		number=strlen(str1);
		if(str1[number-1]=='r')
		{
			str1[number-2]='\0';
			printf("%s\n",str1);
		}
		else
			if(str1[number-1]=='y')
			{
				str1[number-2]='\0';
				printf("%s\n",str1);
			}
			else
				if(str1[number-1]=='g')
				{
					str1[number-3]='\0';
					printf("%s\n",str1);
				}
	}
}