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

int main(){
	int h,k,s,m,i,n;
	int a,b,t=4;    //n????n??,t???????a??????b?????
	scanf("%d",&n);
	for (i=1;i<=(n-4)/2;i++)
	{t=t+2;

	for(a=2;a<=t/2;a++)
	
	{m=0;
		for(k=1;k<=sqrt(a);k++)
		{if (a%k==0)
	      m=m+k;
		}
	s=0;
    if(m==1)
		{b=t-a;
		
			for (h=1;h<=sqrt(b);h++)
			{if(b%h==0)
			s=s+h;
			}
		}
		
	           if(s==1)
			   {printf("%d=%d+%d\n",t,a,b);
	              break;}
	}
	}
	return 0;
}
 
