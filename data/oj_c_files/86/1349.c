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
	int n,i,e,t[50],m[50][50],max[50],num[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		for(e=0;e<t[i];e++)
		{
			scanf("%d",&m[i][e]);
		}
	}
	for(i=0;i<n;i++)
	{
		num[i]=60-3*t[i];
		for(e=0;e<t[i];e++)
		{
			if((m[i][e]+3*e)>=57&&(m[i][e]+3*e)<=60)
			{
				num[i]=m[i][e];
				break;
			}
			if((m[i][e]+3*e)>60)
			{
				t[i]=e;
				num[i]=60-3*t[i];
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}