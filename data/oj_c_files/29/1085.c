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

double f(int n){
	double x[100],y=0.0;
	int i;
	x[0]=1;
	for(i=1;i<=n;i++)
	{
		x[i]=1.0/x[i-1]+1;
		y+=x[i];
	}
	return y;
}

int main(){
	int m,i;
	int n[100];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%.3lf\n",f(n[i]));
	}
	return 0;
}
