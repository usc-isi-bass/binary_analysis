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

int f(int m,int n)
{
	int k=0;
	if(m==0) k=1;
	if(m==1) k=1;
	if(n==1) k=1;
    if(m<n&&m>1) k=f(m,n-1);
	if(m>=n&&n>1) k=f(m,n-1)+f(m-n,n);
	return k;
}
int main()
{
	int t,i,k,m,n;
    scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		k=f(m,n);
		printf("%d\n",k);
	}
	return 0;
}
