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

void swap(int *pa,int n,int m)
{
	int a[100];
	int i;
	for(i=0;i<m;i++) a[i]=pa[n-m+i];
	for(i=0;i<n-m;i++) pa[n-1-i]=pa[n-1-i-m];
	for(i=0;i<m;i++) pa[i]=a[i];
	return;
}
void main()
{
	int c[100];
	int i,n,m,*p=c;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++) scanf("%d",&c[i]);
	swap(p,n,m);
	for(i=0;i<n-1;i++) printf("%d ",c[i]);
	printf("%d",c[n-1]);
}
