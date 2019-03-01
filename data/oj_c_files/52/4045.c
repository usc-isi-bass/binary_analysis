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
	void move(int a[100],int n,int m);
	int n,m,i,a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	move(a,n,m);
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[n-1]);
}

void move(int a[100],int n,int m)
{
	int i,d;
	d=a[n-1];
	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
	a[0]=d;
	m--;
	if(m>0) move(a,n,m);
}
