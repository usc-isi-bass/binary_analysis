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
	int n,k;
	scanf("%d %d",&n,&k);
	int i=0;
	int m=0;
	int p=0;
	while(1)
	{
		m++;
		p = m;
		for(i=0;i<n;i++)
		{
			if(p%n == k)
			{
				p=p/n*(n-1);
			}
			else
				break;
			if(p<=0)
				break;
		}
		if(i==n)
		{

			printf("%d",m);
			break;
		}
	}
	return 0;
}