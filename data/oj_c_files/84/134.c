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
	int k,i,j,a,b,c,m,n,p;
	scanf("%d\n",&k);
	m=0;
	p=0;
    for(i=1;i<=k;i++)
	{   
		scanf("%d\n",&a);
		  if(a>=m)
			{ n=a;
		      if(p>m)
			  j=p;
			  else
			  j=m;
			}
          else
			{n=m;
			 if(p>a)
			  j=p;
			  else
			  j=a;
			}
			m=n;
			p=j;
			
		
	}
	printf("%d\n%d\n",n,j);
	
}