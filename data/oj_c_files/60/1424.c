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
	int a,b,n,i,m=0,c;
	scanf("%d",&n) ;
	for(a=1;a<=n-2;a++)
	{
	    for(i=2;i<=a/2;i++)
	    {
		   if(a%i==0)break;
        }
	    if(i==a/2+1)
	    {
           b=a+2;
           for(c=2;c<=b/2;c++)
	       {
		      if(b%c==0)break;
           }
	       if(c==b/2+1)
	       {
              m++;
              printf("%d %d\n",a,b);
           }
        }
     }
     if(m==0)printf("empty");
}
               
	
