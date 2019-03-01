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



int main()	{
	int n, m, i;
	int a[220];
	scanf("%d%d", &n, &m);
	for(i = 0; i < n; i ++)	{
		scanf("%d", &a[i]);
	}
	for(i = n-1; i >= 0; i --)	{
		a[i+m] = a[i];
	}
	for(i = 0; i < m; i ++)	{
		a[i] = a[i+n];
	}
	int flag = 0;
	for(i = 0; i < n; i ++)	{
		if(flag == 0)	{
			printf("%d", a[i]);
			flag = 1;
			continue;
		}
		if(flag == 1)	{
			printf(" %d", a[i]);
		}
	}
	return 0;
}
