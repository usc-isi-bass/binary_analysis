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
	int n,i,x[1000],y[1000];
	double a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	a=1.0*y[0]/(1.0*x[0]);
	for(i=1;i<n;i++){
		b=1.0*y[i]/(1.0*x[i]);
		if(a-b>0.05){
			printf("worse\n");
		}else if(b-a>0.05){
			printf("better\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}


