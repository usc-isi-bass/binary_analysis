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
	int n,*z,*y,i;
	double v1,v2;
	scanf("%d",&n);
	z=(int*)malloc(sizeof(int)*n);
	y=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d%d",&z[i],&y[i]);
	}
	v1=1.0*y[0]/z[0];
	for(i=1;i<n;i++){
		v2=1.0*y[i]/z[i];
		if(v2-v1>0.05){
			printf("better\n");
		}else if(v1-v2>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}