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
	int shu[20],fei[20],chu[20];
	int n,i,j,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&shu[i]);
	}
	fei[0]=1;
	fei[1]=1;
	for(j=2;j<20;j++)
	{
		fei[j]=fei[j-1]+fei[j-2];
	}
	for(b=0;b<n;b++)
	{
		chu[b]=fei[shu[b]-1];
		printf("%d\n",chu[b]);
	}
	return 0;
}
