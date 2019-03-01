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
	int a[100];
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int max,sec;
	max=a[0];
	sec=a[0];
	for(i=1;i<n;i++)
	{if(a[i]>max)
			max=a[i];
	 if(a[i]<max&&a[i]>sec)
		    sec=a[i];
	}
	printf("%d\n%d\n",max,sec);
}
