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
	int f(int M,int N);
	int t,i;
	scanf("%d",&t);
	int a[20][2];
	for(i=0;i<t;i++)
		scanf("%d %d",&a[i][0],&a[i][1]);
	
	for(i=0;i<t;i++)
		printf("%d\n",f(a[i][0],a[i][1]));
	return 0;
}

int f(int M,int N)
{
	int w;                       
	if(M<=1||N<=1)               
		w=1;
	else if(M<N)                 
		w=f(M,M);
	    //w=f(M,M-1)+f(M,M-2);
	else
		w=f(M-N,N)+f(M,N-1);
	return w; 
} 
