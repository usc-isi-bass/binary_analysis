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
	int i,n,a[100],max,min,x,y;
	scanf("%d",&n);
    scanf("%d",&x);
    scanf("%d",&y);
	if(x>=y)
	{
		max=x;
		min=y;
	}
	else
	{
		max=y;
		min=x;
	}
	for(i=1;i<(n-1);i++)
	{
		scanf("%d",&(a[i]));
		if(a[i]>max)
		{
			min=max;
			max=a[i];
        }
		else if(a[i]<max&&a[i]>min)
		{
			min=a[i];
		}
	}
	printf("%d\n",max);
	printf("%d",min);
	return 0;
}