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


int f_1(int);
int f_2(int,int);

int main()
{
	int n,k,m;
	scanf("%d %d",&n,&k);
	if(f_1(n-1)>k)
		m=f_1(n)-f_2(n,k);
	else
		m=f_1(n)*n-f_2(n,k);
	printf("%d\n",m);
	return 0;
}

int f_1(int n)
{
	int i,output=1;
	for(i=0;i<n;i++){
		output *=n;
	}
	return output;
}

int f_2(int n,int k)
{
	int output;
	output=(n-1)*k;
	return output;
}