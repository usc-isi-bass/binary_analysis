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

void move(int n,int m,int *p)
{
	int j;
	for(j=0;j<m;j++)
		*(p+j)=*(p+n+j);
	*(p+n)='\0';
}


void main()
{
	int a[100],n,m,i;
	int *p=a;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",p+m+i);
	move(n,m,p);	
	for(i=0;i<n-1;i++)
		printf("%d ",*(p+i));
	printf("%d",*(p+i));
}