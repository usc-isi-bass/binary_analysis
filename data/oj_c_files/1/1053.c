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


int f(int a,int x)
{
	int count=1,i;
	for(i=x;i<a;i++)
		if(a%i==0)
			count+=f(a/i,i);
	if(i==a)
		return count;
	else
		return 0;
}

void main()
{
	int n,a;
	scanf("%d",&n);
	for(;n>0;n--)
	{
		scanf("%d",&a);
		if(a==1||a==2)
			printf("1\n");
		else
			printf("%d\n",f(a,2));
	}
}
