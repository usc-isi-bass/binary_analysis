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


int core(int m,int n)
{
	int h;
	if(m==1 && n==1) h=1;
	else if(m<n && m>=1) h=core(m-1,n)+core(m,n-m);
	else if(m==n && m!=1 ) h=core(m-1,n)+1;
	else if(m>n && n>=1) h=core(m-1,n);
	else h=0;
	return(h);
}

void main()
{
	int t;
	
	scanf("%d",&t);
	int i;
	int m,n;
	int a[100];
	for(i=0;i<=t-1;i++)
	{	scanf("%d %d",&n,&m);
		a[i]=core(m,n);
		
	}
	for(i=0;i<=t-1;i++)
		printf("%d\n",a[i]);
	

}