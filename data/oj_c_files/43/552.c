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
	int m,n,k,a,b,i,j,l,y,z,t,s;
	scanf("%d",&m);
	n=m/2;
	k=(n+1)/2;
    for(i=1;i<=k-1;i++)
	{	
		a=2*i+1;
	    b=m-a;
		t=1;
		s=1;
		for(j=2;j<=a-1;j++)
		{
			y=a%j;
            if(y==0) t*=0;
		}
		for(l=2;l<=b-1;l++)
		{
			z=b%l;
            if(z==0) s*=0;
		}
		if(t&&s)
        printf("%d %d\n",a,b);
	 }
	 return(0);
}

