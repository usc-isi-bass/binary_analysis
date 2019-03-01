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

void change(int n,int m,int *p)
{
	int i,j,q;
	for(i=0;i<m;i++)
	{
		q=*(p+n-1);
		for(j=n-1;j>0;j--) *(p+j)=*(p+j-1);
		*p=q;
	}
}
void main()
{
	int n,m,*p,i,q=0;
	scanf("%d%d",&n,&m);
	p=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++) scanf("%d",p+i);
	change(n,m,p);
	for(i=0;i<n-1;i++) printf("%d ",*(p+i));
	printf("%d\n",*(p+i));
}