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
	int i,j,num;
	int m=-100000;
	int n=-100000;
	int a[300];
	char c[300];
	for (i=0;i<300;i++)
	{
		scanf("%d%c",&a[i],&c[i]);
		if (c[i]=='\n') break;
	}
	num=i;
	if (i==0)
		printf("No");
	else
	{
		for (i=0;i<=num;i++)
			if (a[i]>m) m=a[i];
		for (i=0;i<=num;i++)
		{
			if (a[i]==m)
			{
				a[i]=-10000;
			}
		}
		for (i=0;i<=num;i++)
			if (a[i]>n) n=a[i];
		if (n==m||n==-10000)
			printf("No");
		else	
			printf("%d",n);
	}
	return 0;
}

