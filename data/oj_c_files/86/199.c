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


int main(int argc, char* argv[])
{
    int n, i, j, a;
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{	
		int sum=60;
		scanf("%d",&a);
		for(j=0;j<a;j++)
		{
			int b;
			scanf("%d",&b);
			if(b<(sum-3))
			{
			    sum -= 3;
			}
			else if(b>=(sum-3)&&b<=sum)
			{
				sum=b;
			}
		}
			printf("%d\n",sum);
	}
	return 0;

}


