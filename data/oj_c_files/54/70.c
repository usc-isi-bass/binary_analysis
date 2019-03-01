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

int c(int x,int k)
{
	int sum,i=2,j=0,m=1;
sum=x+k;
while(i<=x)
{if((sum*x)%(x-1)==0)
{sum=k+sum*x/(x-1);
i=i+1;
}
else 
{m=m+1;
j=j+1;}
if(j)
{sum=(m)*x+k;
i=2;
j=0;}
}

return(sum);
}

void main()
{int n,k,g;
	scanf("%d %d",&n,&k);
	g=c(n,k);
	printf("%d",g);
}