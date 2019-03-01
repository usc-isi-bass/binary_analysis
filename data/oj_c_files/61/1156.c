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
	int a[20]={1,1};
	int i;
	int N;
	int b[20];
	for (i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];	
	}
	
	
	
	scanf("%d",&N);
	printf("\n");
	for (i=0;i<=N-1;i++)
	{
		scanf("%d",&b[i]);
		printf("\n");
	}
	
	for (i=0;i<=N-1;i++)
	{
		printf("%d",a[b[i]-1]);
		printf("\n");
	}
	
	return 0;
}