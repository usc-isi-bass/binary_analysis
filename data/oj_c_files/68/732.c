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
	int x,y,i,j,k,l,n,m;
	scanf("%d",&n);
	m=6;
	while(m<=n)
	{
	x=3;
judx:k=sqrt(x);
	i=3;
	while(i<=k)
	{
	    if(x%i!=0)
	    i=i+2;
		else 
		{
judy:x=x+2;
			goto judx;
		}
	}
     y=m-x;
	 l=sqrt(y);
	 j=3;
	 while(j<=l)
	 {
		 if(y%j!=0)
			 j=j+2;
		 else goto judy;
	 }
	 printf("%d=%d+%d\n",m,x,y);
	 m=m+2;
	}
}