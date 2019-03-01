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

int Max=1,max=0,k,*p;
void f(int x)
{
	int i;
	int height=*(p+x);
	if(max>Max)
		Max=max;
	for(i=x+1;i<k;i++)
	{
		if(*(p+i)<=height)
		{
		    max+=1;
		    f(i);
		    max-=1;
		}
	}
}
void main()
{
	int i;
	scanf("%d",&k);
	p=(int*)malloc(k*sizeof(int));
	for(i=0;i<k;i++)
	    scanf("%d",p+i);
	for(i=0;k-i>Max,i<k;i++)
	{
		max+=1;
		f(i);
		max-=1;
	}
	printf("%d\n",Max);
}