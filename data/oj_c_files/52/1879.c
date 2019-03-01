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
	int a[100],*p;
	int n,m,i,j,temp;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=1;j<=m;j++)
	{
	for(i=1;i<n;i++)
	{
		p=&a[n-i];
		temp=*p;
		p=&a[n-1-i];
		a[n-i]=*p;
		*p=temp;
	}
	}
	for(p=a,i=0;i<n;p++,i++)
	{
		printf("%d",*p);{
	if(i<n-1) printf(" ");
	else break;}
}
}