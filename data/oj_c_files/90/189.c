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
	int f(int m,int n);
	int k,m[100],n[100],i;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d%d",&m[i],&n[i]);
	for(i=0;i<k;i++)
		printf("%d\n",f(m[i],n[i]));
}
int f(int m,int n)
{
	int result;
	if(m==0)
		result=1;
	else
	{
	if(m==1||n==1)
		result=1;
	if(n>1&&m>1&&m>=n)
		result=f(m,n-1)+f(m-n,n);
	if(n>1&&m>1&&m<n)
		result=f(m,n-1);
	}
	return result;

}
	
