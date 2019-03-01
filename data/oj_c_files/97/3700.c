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
	int a[6]={0};
	int n,i,j;
	scanf("%d",&n);
	int wor[6]={100,50,20,10,5,1};
	int num[6];
	for(i=0;i<=5;i++)
	{
		num[i]=n/wor[i];
		n=n-num[i]*wor[i];
	}
	for(i=0;i<=5;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}







