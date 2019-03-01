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
	int n,i,t,m,p,q;
	scanf("%d",&n);
	for(i=6;i<=n;i++)
	{
		if(i%2!=0)
			continue;
		else
		{
			for(t=3;t<=i/2;t++)
			{
				p=0;
				q=0;
				for(m=2;m<=sqrt(t);m++)
				{
					if(t%m==0)
					{
						p=1;
						break;
					}
					else
						continue;
				}
				for(m=2;m<=sqrt(i-t);m++)
				{
					if((i-t)%m==0)
					{
						q=1;
						break;
					}
					else
						continue;
				}
				if(p==0&&q==0)
				{
					printf("%d=%d+%d\n",i,t,i-t);
					break;
				}
				else
					continue;
			}
		}
	}
	return 0;
}


