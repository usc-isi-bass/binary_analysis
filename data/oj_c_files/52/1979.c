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
	int n,m,i,p;//n??????m??????
	int a[201]={0};
	p=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
    for(i=n-m;i<n;i++)
	{
		a[100+p]=a[i];
		p=p+1;
	}
	for(i=n-1;i>=m;i--)
	{
		a[i]=a[i-m];
	}
	for(i=0;i<m;i++)
	{	a[i]=a[100+i];}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{printf(" %d",a[i]);}

}