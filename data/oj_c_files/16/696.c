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
	int n,i,a[6];
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(n==n%10)
		{
			i=i+5;
			printf("%d",n);
		}
		else
		{
			a[i]=n%10;
			n=n/10;
			printf("%d",a[i]);
		}
	}
	return 0;
}