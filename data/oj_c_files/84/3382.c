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
	int n,t,max,max2,i;
	scanf("%d",&n);
	scanf("%d",&t);
	max=max2=t;
	for (i=1;i<n;i++)
	{
		scanf("%d",&t);
		if (t>max)
		{
			max2=max;
			max=t;
		}
		else if (t>max2)
			max2=t;
		}
	printf("%d\n",max,max2);
	printf("%d\n",max2);
	return 0;
}