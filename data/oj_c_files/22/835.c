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
	unsigned int a[300],max=0,smax=0;
	char c;
	int i=0,n;
	do
	{
		scanf("%d%c",&a[i],&c);
		i++;
	}while(c==',');
	n=i;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]<max&&a[i]>smax)
			smax=a[i];
	}
	if(smax)
		printf("%d",smax);
	else
		printf("No");
	return 0;
}