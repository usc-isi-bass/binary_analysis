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

void main( )
{
	int n,i,k=0;
    int f(int a);
	scanf("%d",&n);
	for(i=3;i<n-1;i++)
	{if((f(i)==0)&&(f(i+2)==0))
	{printf("%d %d\n",i,i+2);
	k++;}
	}
	if(k==0)printf("empty");
}
int f(int a)
{
	int b=sqrt(a);
	int i,sum=0;
	for(i=2;i<=b;i++)
		if(a%i==0)
		{sum=1;break;}
		return(sum);
}