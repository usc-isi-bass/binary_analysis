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

int prime(int m)
{
	int i;
	for(i=2;i<=sqrt(m);i++)
		if(m%i==0)
		{
			return 0;
			break;
		}
	if(i>sqrt(m)) return 1;
}
void main()
{
	int i,n;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		int j,k;
		for(j=3;j<i;j++)
		{
			if(prime(j))
			{
				if(prime(i-j))
				{
					printf("%d=%d+%d\n",i,j,i-j);
					break;
				}
			}
		}

	}
}