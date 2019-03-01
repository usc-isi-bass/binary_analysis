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

void swap(int a[],int n,int m)
{
	int temp;
    temp=a[m];
	a[m]=a[n];
	a[n]=temp;
}
void circle(int a[],int l)
{
	int i;
	for(i=0;i<l;i++)
		swap(a,0,i);
}
void main()
{
	int l,k,i;
	int a[100];
	scanf("%d %d",&l,&k);
	for(i=0;i<l;i++)
		scanf("%d",&a[i]);
	for(i=0;i<k;i++)
		circle(a,l);
	for(i=0;i<l-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[i]);
}