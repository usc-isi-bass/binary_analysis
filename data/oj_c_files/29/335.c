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


double sum(int n){
	int a=1,b=2;
	
	double c;
	double h=0;
	int i=1;
	int e;
	while(i<=n){
		c=(1.0*b)/(1.0*a);
		h+=c;
		e=a;
		a=b;
		b+=e;
		i++;
	}
	return h;
}







int main()
{
	int m,n;
	double hs;
	scanf("%d",&m);
	for(int mm=0;mm<m;mm++){
		scanf("%d",&n);
		hs=sum(n);
		printf("%.3lf",hs);
		if(mm!=m-1){
			printf("\n");
		}
	}

    return 0;
}