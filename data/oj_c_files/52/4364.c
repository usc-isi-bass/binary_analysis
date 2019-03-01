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
	void loop(int a[],int b);
	int n,m,i;
	int c[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n-m;i++)
		loop(c,n);
	printf("%d",c[0]);
	for(i=1;i<n;i++)
		printf(" %d",c[i]);
}
void loop(int a[],int b)
{
	int i,temp=a[0];
	for(i=0;i<b-1;i++)
		a[i]=a[i+1];
	a[b-1]=temp;
}