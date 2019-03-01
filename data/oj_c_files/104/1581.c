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

int comp(const void *c,const void *d)
{
	return *(int *)c-*(int *)d;
}
int main(void)
{
	int i=0,j=0,k,x,y,x1,y1;
	int a[1001];
	int b[1001];
	scanf("%d%d",&x,&y);
	x1=x;y1=y;
	while(x>=1)
	{
		a[i++]=x;
		x/=2;
	}
	while(y>=1)
	{
		b[j++]=y;
		y/=2;
	}
	qsort(a,i,sizeof(a[0]),comp);
	qsort(b,j,sizeof(b[0]),comp);
	for(i=0;;i++)
	{
		if(a[i]==b[i])
		    k=a[i];
		else
		    break;
	}
	if(x1==y1)
		printf("%d",x1);
	else
		printf("%d",k);
	return 0;
}