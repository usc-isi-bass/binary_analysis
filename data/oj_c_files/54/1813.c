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


int n,k,t,f;

void divide(int m)
{
	if((m-k)%n!=0)
	{
		f=0;
		return;
	}
    m=(m-k)*(n-1)/n;
	t++;
	if(t==n)
		f=m>0?1:0;
	else
	    divide(m);
}
void main()
{
	int i,m;
    scanf("%d%d",&n,&k);
	m=n;
	while(1)
	{
		t=0,f=0;
		divide(m);
		if(f==1)
		{
			printf("%d",m);
			break;
		}
		else
			m++;
	}
	
}