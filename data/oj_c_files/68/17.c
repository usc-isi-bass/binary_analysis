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
	int n,i,j,k,a,b,m,h,p;
	int f,u;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<i-1;j++)
		{
			m=0;
			f=sqrt(j);
			for(k=2;k<=f;k++)
			{
			    if(j%k==0)
				{
					m+=1;
				}
			}
			if(m==0)
			{
				a=j;
			}
		    h=0;
			u=sqrt(i-a);
	 	    for(p=2;p<=u;p++)
			{
			    if((i-a)%p==0)
				{
				    h+=1;
				}
			}
		    if(h==0)
			{
			    b=i-a;
			    printf("%d=%d+%d\n",i,a,b);
				break;
			}
		}
	}
    return 0;
}