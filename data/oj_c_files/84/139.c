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
	int n,b,c,i;            //b?? c??
	scanf("%d %d %d", &n, &b, &c);
	int a[100];                  
	for(i=3;i<=n;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]>=b)
		{
			c=b;
			b=a[i];
		}
		else if(a[i]>=c)
		{
			c=a[i];
		}
	}
	printf("%d\n%d\n", b, c);
	return 0;
}