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

int a[100],b[100],n,m,i,j,t;
void shuru(int p,int q) 
{
	for(i=0;i<p;i++)	scanf("%d",&a[i]);
	for(i=0;i<q;i++)	scanf("%d",&b[i]);
} 
void shuchu(int p,int q)
{
	for(i=0;i<p;i++)	printf("%d ",a[i]);
	for(i=0;i<q-1;i++)	printf("%d ",b[i]);
	printf("%d",b[q-1]);
} 
void paixu(int p,int c[]) 
{
	for(i=0;i<p;i++)
	for(j=0;j<i;j++)
	if(c[i]<c[j])
	{
		t=c[i];
		c[i]=c[j];
		c[j]=t;
	} 
} 
main()
{
	scanf("%d %d",&n,&m);
	shuru(n,m);
	paixu(n,a);
	paixu(m,b);
	shuchu(n,m);

}