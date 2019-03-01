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
	int *n,x,i,*ans;
	int fibonacci(int);
	scanf("%d",&x);
	n=(int *)calloc(x,sizeof(int));
	ans=(int *)calloc(x,sizeof(int));
	for(i=0;i<x;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<x;i++)
	{
		ans[i]=fibonacci(n[i]);
		printf("%d\n",ans[i]);
	}
}
int fibonacci(int n)
{
	if(n==1 || n==2) return 1;
	else return fibonacci(n-2)+fibonacci(n-1);
}