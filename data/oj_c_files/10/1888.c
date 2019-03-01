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
	int a[25];
	scanf("%d",&a[0]);
	int i = 1;
	while(i<n)
	{
		scanf(" %d",&a[i]);
		i++;
	}
	int b[25];
	i = n-2;
	b[n-1] = 1;
	while(i>=0)
	{
		b[i] = 1;
		int m = i + 1;
		while(m<n)
		{
			if((a[m]<=a[i])&&(b[m]>=b[i]-1))
			{
				b[i] = b[m] + 1;
			}
			m++;
		}
		i--;
	}
	int k = 1;
	i = 0;
	while(i<n)
	{
		if(b[i]>k)
			k = b[i];
		i++;
	}
	printf("%d",k);
	return 0;
}