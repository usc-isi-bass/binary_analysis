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

int main(){
	int n,i,m,x[100];
	scanf("%d",&n);
	for(i=0;i<100;i++)
	{
		if(i==n)
			break;
		scanf("%d",&x[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(x[i]>x[i+1])
		{
			m=x[i];
			x[i]=x[i+1];
			x[i+1]=m;
		}
	}
	for(i=0;i<n-2;i++)
	{
		if(x[i]>x[i+1])
		{
			m=x[i];
			x[i]=x[i+1];
			x[i+1]=m;
		}
	}
	printf("%d\n%d\n",x[n-1],x[n-2]);
	return 0;
}