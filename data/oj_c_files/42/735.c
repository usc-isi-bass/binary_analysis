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
	int del(int *x,int n,int m);
int a[100000];
int *p;
p=a;
int n,m,i,k;

scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",p+i);
scanf("%d",&m);
k=del(p,n,m);
for(i=0;i<n-k-1;i++)
printf("%d ",*(p+i));
printf("%d",*(p+n-k-1));
}
	int del(int *x,int n,int m)
	{int i,j,k=0;
	for(i=0;i<n;i++)
	{if(*(x+i)==m)
	{	for(j=i;j<n-k;j++)
	*(x+j)=*(x+j+1);
	k++;
	i--;
	}
	
	
	}
	return k;
	}