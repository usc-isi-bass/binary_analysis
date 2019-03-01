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

int main(int argc, char* argv[])
{
	int n,a[5],i=0,j;
	double N=0;
	scanf ("%d",&n);
	while (n % 10 != 0)
	{
		a[i]= n % 10;
		n = n/10;
		i++;
	}
	for (j=0;j<i;j++)
	{
		N += a[j]* pow (10, (i-j-1));
	}
	printf("%.0lf",N);
	return 0;
}