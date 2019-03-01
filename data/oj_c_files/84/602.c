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
    int a[100],i,max=0,t;
	scanf("%d",&i);
	while(i>0)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			t=max;
			max=a[i];
		}
		else if(t<a[i])
		{
			t=a[i];
		}
		i--;
	}
	printf("%d\n",max);
	printf("%d",t);
	return 0;
} 