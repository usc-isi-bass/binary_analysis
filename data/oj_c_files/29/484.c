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

int f(int a)
{
	if(a==1 ) return 1;
    else  if(a==2) return 2;
	return f(a-1)+f(a-2);
}
int main()
{
	int n,i,a1,a2,j,m;
	double sum;
	a1=f(1);
	a2=f(2);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{     
		sum=2;
		scanf("%d",&m);
		for(j=2;j<=m;j++)
		{
		   
	       sum+= (1.0*f(j+1)/f(j));
		}
		printf("%.3lf\n",sum);
	}
   
	  return 0;
}