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
	int n,i;
	int zs[1000],yx[1000];
	double x,y[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&zs[i],&yx[i]);
        x=1.0*100*yx[0]/zs[0];
		y[i]=1.0*100*yx[i]/zs[i];
	}
	for(i=1;i<n;i++){
		if(y[i]-x>5.0){
			printf("better\n");
		}else if(x-y[i]>5.0){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}
