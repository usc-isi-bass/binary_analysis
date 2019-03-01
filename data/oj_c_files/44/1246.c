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

int reverse(int a)
{
	int x,i,p,t,j,n=0;
	if(a==0)
		return(0);
	x=abs(a);
	for(i=9,p=0,j=0;i>=0;i--)
	{
		t=x/((int)pow(10,i));
		x-=t*(int)pow(10,i);
		if((t!=0)||(p==1))
		{
			p=1;
			n+=t*pow(10,j);
			j++;
		}
	}
	if(a<0)
		n=-n;
	return(n);
}

void main()
{
	int a,i;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&a);
		printf("%d\n",reverse(a));
	}
}