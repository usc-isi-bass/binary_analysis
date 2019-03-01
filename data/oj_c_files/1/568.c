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

void main()
{
	int fac(int a,int b);
	int n,i,m,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		m=fac(a[i],2);
		printf("%d\n",m);
	}
}



int fac(int a,int b)
{
	int j,i;
	if(a<b) j=0;
	else 
	{
		j=1;
		for(i=b;i<a;i++)
		{
		if(a%i==0)  j=j+fac(a/i,i);
		
		}
	}
	return(j);
}	
