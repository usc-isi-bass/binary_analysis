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
	int n,p,a=0,b,m=0,flag=0,i;
	scanf("%d",&n);
	for(i=1;i<=n*n;i++)
	{
		scanf("%d",&p);
		if(p==0)
		{
			if(m==0)
			{
				flag=1;
				a++;
				m++;
			}
			else
			{
				if(flag==1)
				{
					m++;
					a++;
				}
				else
				{
					m++;
				}
			}
		}
		else
		{
				flag=0;
		}
	}
	b=m/2-a;a=a-2;
	printf("%d",a*b);
}


