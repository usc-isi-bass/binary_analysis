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
	int *num;
	num=(int*)malloc(n);
	int j,a;
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a);
			*(num+j)=a;
	}
	for(j=n;j>1;j--)
	{
		printf("%d ",*(num+j));
	}
	printf("%d\n",*(num+1));
	return 0;
}