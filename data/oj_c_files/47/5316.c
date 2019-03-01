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
	int n,a[100],i,j,m=0;
	scanf ("%d",&n);
    for (i=0;i<=n-1;i++)
	{
		scanf ("%d",&a[i]);
		m++;
	}
	for (j=m-1;j>0;j--)
		printf ("%d ",a[j]);
         printf ("%d",a[0]);
	return 0;
}