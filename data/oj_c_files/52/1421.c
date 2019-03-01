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
	int a[100];
	int t[100];
	int n,m,i,j,h;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	j=n-m;
	for(i=0;i<m;i++)
	{
		t[i]=a[j];
		j=j+1;
	}
	h=0;
	for(i=m;i<n;i++)
	{
		t[i]=a[h];
		h=h+1;
	}
	for(i=0;i<n-1;i++)
		printf("%d ",t[i]);
	printf("%d",t[n-1]);
}