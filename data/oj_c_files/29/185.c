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
    int n,i,j;
	
	float sum;
	int a,b,c,m;
	sum=0.0;
	a=2;
	b=1;
   
	scanf("%d",&n);
	scanf("%d",&m);
		for(j=0;j<m;j++){
			sum+=(float)a/b;
			c=a;
			a=a+b;
			b=c;
		}
		printf("%.3f",sum);
	sum=0.0;
	a=2;
	b=1;	
    for (i=1;i<n;i++){
		scanf("%d",&m);
		for(j=0;j<m;j++){
			sum+=(float)a/b;
			c=a;
			a=a+b;
			b=c;
		}
		printf("\n%.3f",sum);
		sum=0.0;
	 a=2;
   	b=1;
		
	}


	return 0;
}