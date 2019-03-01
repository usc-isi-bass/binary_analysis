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
    int z[1001];
	int a,n;
	z[1]=1;
	z[2]=1;
    scanf("%d",&n);
	for(a=1;a<=998;a++)
	{
		z[a+2]=z[a+1]+z[a];
	}
	for(a=1;a<=n;a++)
	{
		scanf("%d",&z[0]);
		printf("%d\n",z[z[0]]);
	}
	return 0;
}
