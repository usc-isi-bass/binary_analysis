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
	int a[6];
	int b[6]={100,50,20,10,5,1};
	int n,i,m=0;
	scanf("%d",&n);
	a[0]=n/100;
	for(i=1;i<6;i++)
	{
		m+=a[i-1]*b[i-1];
		a[i] = (n-m)/b[i];
		
	}
	for (i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}