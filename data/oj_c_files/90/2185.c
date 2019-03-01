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


int hanshu(int n,int M)
{
	if(n==1)return 1;
	int a;
	if(M<n)a=0;
	if(M==n)a=1;
	if(M>n)a=hanshu(n,M-n);
	return hanshu(n-1,M)+a;
} 
int main()
{
	int t,M,N,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d %d",&M,&N);
	    printf("%d\n",hanshu(N,M));
	}
	
}