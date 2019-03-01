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
	int n, j, s, a=0, k[1000];
	scanf("%d\n", &n);
	for(j=0; j<n*n; j++)
	{
		scanf("%d", &k[j]);
	}
	for(j=0; j<n*n; j++)
	{
		if(k[j]==0)
			a=a+1;
	}
	s=(a/4-1)*(a/4-1);
	printf("%d\n", s);
	return 0;
}