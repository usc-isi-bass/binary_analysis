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
	int n,i,a,max=0,max2=0;
	scanf("%d",&n);
	scanf("%d",&a);
	max=a,max2=a;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>max)
		{
			max=a;
		}
		else
		{
			if(a>max2)
			{
				max2=a;
			}
		}
	}
	printf("%d\n%d",max,max2);
	return 0;
}
