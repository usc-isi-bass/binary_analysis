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
	int c;
	int i,t,n,m,j;
	
	scanf("%d",&m);
	for(j=0;j<m;j++){
     int a=0,b=1;
	 double sum=0;
	scanf("%d",&n);
	if(n==1)
		printf("%.3lf\n",2.000);
	else {
	
	for(i=1;i<n+2;i++){
		c=a+b;
		a=b;
		b=c;
		sum+=1.0*b/a;
	}
	
	printf("%.3lf\n",sum-1);
	}
	}
	return 0;
	
}