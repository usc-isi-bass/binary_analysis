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

void move(int a[],int n,int m);
void main()
{
	int n,m,i,a[100],*p;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	move(a,n,m);
	for(i=0;i<n-1;i++)printf("%d ",a[i]);
	printf("%d",a[n-1]);
	printf("\n");
}
void move(int a[],int n,int m)	
{
	int *p,i,t;
	t=a[n-1];
	for(p=(a+n-1);p>a;p--)
	*p=*(p-1);
	*a=t;
	m--;
	if(m>0)move(a,n,m);
}

