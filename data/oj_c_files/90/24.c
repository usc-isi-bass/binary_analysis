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
	int t,m,n,i;
	int f(int,int);
	scanf("%d\n",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",f(m,n));
	}
}

int f(int m,int n)
{
	int a;
	if(n==1||m==0)a=1;
	else
		if(m<n)a=f(m,m);	
	else 
		a=f(m,(n-1))+f((m-n),n);
	return a;
}