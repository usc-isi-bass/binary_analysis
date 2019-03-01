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


double xs(int n){
	int e;
	int a=1,b=2;
	double sum=0;
	for(int i=1;i<=n;i++){
		if(i==1){
			sum+=(1.0*b)/(1.0*a);
		}
		else{
			e=a+b;
			a=b;
			b=e;
			sum+=(1.0*b)/(1.0*a);
		}
	}
	return sum;
}



	

int main()
{
	int m;
	scanf("%d",&m);
	int n;
	double h;
	for(int j=1;j<=m;j++){
		scanf("%d",&n);
		h=xs(n);
		printf("%.3lf",h);
		if(j!=m){
			printf("\n");
		}
	}
		

	
	return 0;
}