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

void exchange(int *a,int *b)
{
	if(*a>*b)
	{
		*a=*a+*b;
		*b=*a-*b;
		*a=*a-*b;
	}
}
void sort(int*p,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1-i;j++)
	exchange(p+j,p+j+1);
}
int race(int*t,int*q,int n)
{
	int tj=0,qw=0,count=0;
	for(;;)
	{
		if(n==0)	break;
		if(*(t+tj)>*(q+qw))
		{	tj++;qw++;count++;n--;	}
		else if(*(t+tj+n-1)>*(q+qw+n-1))
		{	count++;n--;	}
		else 
		{	
			if(*(t+tj)<*(q+qw+n-1))count--;
			tj++;n--;	
		}
	}	
	return count;
}
int main()
{
	int n,t[1000],q[1000],i;
	for(;;)
	{
	scanf("%d",&n);
	if(n==0)break;
	for(i=0;i<n;i++)scanf("%d",&t[i]);
	for(i=0;i<n;i++)scanf("%d",&q[i]);
	sort(t,n);
	sort(q,n);
	printf("%d\n",200*race(t,q,n));
	}
	return 0;
}
