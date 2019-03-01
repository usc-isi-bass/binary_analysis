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
	int cun[100]={0},fang[100]={0};
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&cun[i]);
		fang[i]=cun[i];
	}
	for(i=0;i<n-1;i++)
	{
		cun[i]=fang[n-1-i];
		printf("%d ",cun[i]);
	}
	cun[n-1]=fang[0];
	printf("%d",cun[n-1]);
	return 0;
}