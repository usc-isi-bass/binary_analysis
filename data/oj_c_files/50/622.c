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
    int n,month[12]={13,44,72,103,133,164,194,225,256,286,317,347},i,s[12];
	scanf("%d",&n);
	for(i=0;i<12;i++)
	{
		s[i]=month[i]%7;
		if(n<=5)
		{
			if(s[i]==6-n)
			{
				printf("%d\n",i+1);
			}
		}
		else if(n==6)
		{
			if(s[i]==0)
			{
				printf("%d\n",i+1);
			}
		}
		else 
		{
			if(s[i]==6)
			{
				printf("%d\n",i+1);
			}
		}
	}

	return 0;
}

