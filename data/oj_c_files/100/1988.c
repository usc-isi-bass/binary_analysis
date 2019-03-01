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
	char zfc[301];
	char zm[53]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int number[52];
	int p=0,k=0;
	gets(zfc);
	int i;
	for (i=0;i<52;i++)
	{
		number[i]=0;
		for(k=0;zfc[k]!='\0';k++)
		{
			if(zfc[k]==zm[i])
			{
				number[i]++;
			}
		}
	}
	for(i=0;i<52;i++)
	{
		if(number[i]!=0)
		{
			p=1;
			printf("%c=%d\n",zm[i],number[i]);
		}
	}
	if(p==0)
	{
		printf("No");
	}
	return 0;
}
		