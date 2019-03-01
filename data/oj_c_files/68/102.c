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


int f(int x){
	int i,t=0;
	for(i=2;i*i<x;i++)
	{
		if(x%i==0) break;
	}
	if(i*i>x) t=1;
	return t;
}



int main()
{
	int n;
	scanf("%d",&n);

	int i,j;	
	int t1,t2;
	int x;
	for(i=6;i<=n;i=i+2)
	{
		for(j=3;j<i;j=j+2)
		{
			x=i-j;
			t1=f(j);
			t2=f(x);
			if(t1==1 && t2==1)
			{
				printf("%d=%d+%d\n",i,j,x);
				break;
			}
		}

	}
	return 0;
}
