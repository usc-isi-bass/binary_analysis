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
	int m = 0;
	int n;

	scanf("%d", &n);
	int a[5];
	int i = 0;
	while(n>=1)
	{
		a[i] = n%10;
		n = (int)(n/10);
		i++;
	}
	int k = 0 ; 
	int j = 0 ;
	for(j = i; j >0; j--, k ++)
	{
		m = 10*m + a[k];
	}
	printf("%d", m);
}
