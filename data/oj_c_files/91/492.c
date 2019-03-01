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
	char z[2][150];
	gets(z[0]);
	int i=0;
	int n=strlen(z[0]);
	for(i=0;i<n-1;i++)
	{
		z[1][i]=z[0][i]+z[0][i+1];
	}
	z[1][n-1]=z[0][n-1]+z[0][0];
	for(i=0;i<n;i++)
	{
		printf("%c",z[1][i]);
	}
	return 0;
}