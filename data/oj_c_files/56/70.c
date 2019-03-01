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
	int n,i,N,a[5];
	scanf("%d",&n);
N=(int)(log10(n))+1;
	for (i=0;i<N;i++)
	{
		a[i]=n%10;
		n=(n-a[i])/10;
		printf("%d",a[i]);
	}


   return 0;
}