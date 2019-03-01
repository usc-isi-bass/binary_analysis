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


int main(int argc, char* argv[])
{
	int n,shu[100],i,j,a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&shu[i]);
	}
	for(i=1;i<3;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(shu[j]>shu[j+1])
			{
				a=shu[j];
				shu[j]=shu[j+1];
				shu[j+1]=a;
			}
		}
	}
	for(i=1;i<3;i++)
	{
		printf("%d\n",shu[n-i]);
	}
	return 0;
}
