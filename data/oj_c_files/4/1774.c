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

int r,c,*p,n,m,i,j,k;
void main()
{
 void x(int i);
 void y(int i);
 scanf("%d %d",&r,&c);
 n=r*c;m=r+c-2;
 p=(int *)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
 scanf("%d",p+i);
 for(i=0;i<c;i++)x(i);
 for(i=c;i<=m;i++)y(i);
}
void x(int i)
{
	int a;
	for(a=i;a>=0&&(i-a)<r;a--)
		printf("%d\n",*(p+(i-a)*c+a));
}
void y(int i)
{
	int a;
	for(a=c-1;a>=0&&(i-a)<r;a--)
		printf("%d\n",*(p+(i-a)*c+a));
}