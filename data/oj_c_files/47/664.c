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
	int a[100];
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	while (n--)
	{
		printf("%d",a[n]);
		if (n!=0)
		{
			printf(" ");
		}
	}
	return 0;
}