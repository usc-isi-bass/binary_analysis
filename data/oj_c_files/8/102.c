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

int i,j,k,l,m,b[20],c[20];
void f()
{
	scanf("%d%d",&l,&k);
}
void g(int d[20],int s)
{   
   for(i=0;i<s;i++)
		scanf("%d",&d[i]);
}
void h(int a[20],int n,int p)
{
    for (j=0;j<n-1;j++)
	for(i=0;i<n-1-j;i++)
		if(a[i]>a[i+1])
		{ 
			m=a[i];
			a[i]=a[i+1];
			a[i+1]=m;
		}
		for(i=0;i<n-1;i++)
			printf("%d ",a[i]);
	if(p==1)	printf("%d ",a[n-1]);
    if(p==2)    printf("%d\n",a[n-1]);
} 
void main()
{
	f();
    g(b,l);
	g(c,k);
	h(b,l,1);
	h(c,k,2);
}
