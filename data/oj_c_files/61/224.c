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
	int fei[20],n,i;
	int input[20],output[20];
	fei[0]=1;
	fei[1]=1;
	for(i=2;i<20;i++)
	{
		fei[i]=fei[i-1]+fei[i-2];
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&input[i]);
		output[i]=fei[input[i]-1];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",output[i]);
	}
	return 0;
}