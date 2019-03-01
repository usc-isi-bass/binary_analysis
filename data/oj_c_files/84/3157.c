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

void operate(int a[],int n)
{	int i,pointer=0,max=a[0];
	for(i=0;i<n;i++)
	 if(a[i]>max) {pointer=i;max=a[i];}
	a[pointer]=0;
	printf("%d\n",max);
}
void main()
{	int i,n,a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	operate(a,n);
	operate(a,n);
}