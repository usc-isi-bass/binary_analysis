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
	int n,zong[N],xiao[N],k;
	double x,y[N];
	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%d %d",&zong[k],&xiao[k]);
	}
	x=1.0*xiao[0]/zong[0];
	for(k=1;k<n;k++){
		y[k]=1.0*xiao[k]/zong[k];
		if(y[k]-x>0.05){
			printf("better\n");
		}else if(x-y[k]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}
