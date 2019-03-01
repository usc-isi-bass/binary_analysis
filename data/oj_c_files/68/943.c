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

int test(int x)
{
	int i;
	if(x==1) return 1;
	if(x==3) return 0;
	for(i=2;i<=sqrt(x);i++)
	{	if(x%i==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=6;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=3;j<n;j++)
			{
				if(test(j)==0)
				{
					if(test(i-j)==0)
					{
						printf("%d=%d+%d\n",i,j,i-j);
						break;
					}
				}
			}
		}
	}


	return 0;
}
	