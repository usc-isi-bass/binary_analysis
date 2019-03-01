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

void main()
{
	long n, a[100000], k, i;
	scanf("%ld", &n);
	for(i=0; i<n; i++)
		scanf("%ld", &a[i]);
	scanf("%ld", &k);
	for(i=0; i<n; )
	{
		if(a[i]!=k) break;
		i++;
	}
	printf("%ld", a[i]);
	for(i=i+1; i<n; i++)
	{
		if(a[i]==k) continue;
		printf(" %ld", a[i]);
	}
	printf("\n");
}