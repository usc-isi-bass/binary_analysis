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

int main()
{
	int m[21],n[21],t,i;
	int count1(int,int);
	scanf("%d",&t);
	for(i=1;i<=t;i++)
		scanf("%d %d",&m[i],&n[i]);
	for(i=1;i<=t;i++)
		printf("%d\n",count1(m[i],n[i]));
	return 0;
}
int count1(int m,int n)
{
	int k;
	if(n==1||n==0) return 1;
	if(m==1||m==0) return 1;
	if(m<n) return  count1(m,m);
	k=count1(m,n-1)+count1(m-n,n);
	return k;
}