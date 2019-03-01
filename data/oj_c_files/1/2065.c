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

int times;
void fenjie(int m,int k)
{
	int i;
	{
		for(i=k;i<=sqrt(m);i++)
		{
			if(m%i==0)
			{
				fenjie(m/i,i);
			}
		}
	}
	times++;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m;
		times=0;
		scanf("%d",&m);
		fenjie(m,2);
		printf("%d\n",times);
	}
}