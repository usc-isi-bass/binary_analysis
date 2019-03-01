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
	int z[100],n,i,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&z[i]);
	for(i=1,max=z[0],min=z[0];i<n;i++)
	{
		if(z[i]>max)
		{
			min=max;
			max=z[i];
		}
		else if(z[i]<max&&z[i]>min) min=z[i];
	}
	printf("%d\n%d\n",max,min);
	return 0;
}
