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
	int n,m=0,i,a[10];
	scanf("%d",&n);
	do
	{
		a[m]=n%10;
		n/=10;
		m++;
	}while(n>0);
	for(i=0;i<m;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}