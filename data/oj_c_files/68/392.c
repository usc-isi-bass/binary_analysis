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

/* Note:Your choice is C IDE */
void main()
{
   long prime(long n);
    long x=6,m=2,z;
    scanf("%d",&z);
    for(x=6;x<=z;x=x+2)
    {
    	printf("%d=",x);
    	for(m=2;prime(m)!=0||prime(x-m)!=0;m++)
    	{}
    	printf("%d+%d\n",m,x-m);

    }
}
long prime(long n)
{
	long i=2,j=0;
	while(i<sqrt(n)+1)
	{
		if(n%i==0)
		j=j+i;
		i=i+1;
	}
	return(j);
}