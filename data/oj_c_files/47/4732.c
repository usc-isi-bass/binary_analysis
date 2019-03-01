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
	int n,a[100];
	int i;
	for(i=0;i<100;i++)
		a[i]=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=n;i>=1;i--)
	{
		if(i>1)
			printf("%d ",a[i]);
		else
			printf("%d",a[i]);
	}
	return 0;
}
