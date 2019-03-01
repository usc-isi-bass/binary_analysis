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
	int i,n,m,num[100];
	void move(int num[100],int n);
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<m;i++)
		move(num,n);
	for(i=0;i<n-1;i++)
		printf("%d ",num[i]);
	printf("%d",num[n-1]);
}
void move(int num[100],int n)
{
	int t,j;
	t=num[n-1];
	for(j=n-1;j>0;j--)
		num[j]=num[j-1];
	num[0]=t;
}