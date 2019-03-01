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
	int a,b,c,d,m,i,j;
	scanf("%d",&m);
	for(a=2;a<=m;a++)
	{
		for(b=a;b<=m;b++)
		{
			if(a+b==m)
			{
				c=1;
			for(i=2;i<=sqrt(a);i++)
				
			{
					if(a%i==0) 
					c=0; 
			}
		    d=1;
			for(j=2;j<=sqrt(b);j++)
			{
					if(b%j==0) 
					d=0;
			}
							
				
	if(c!=0)
	if(d!=0) printf("%d %d\n",a,b);
				

		}
		}
	}
	return 0;
}