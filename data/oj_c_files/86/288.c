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
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		int m,sum=60;
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			int a;
			scanf("%d",&a);
			if(a<(sum-3))
			{
			    sum -= 3;
			}
			else if(a>=(sum-3)&&a<=sum)
			{
				sum=a;
			}
		}
			printf("%d\n",sum);
	}
	return 0;
}


