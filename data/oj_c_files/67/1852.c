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

int main(){
	int n,zbl[200],yxbl[100];
	double x,y[100];
	scanf("%d",&n);
	scanf("%d%d",&zbl[0],&yxbl[0]);
	x=1.0*yxbl[0]/zbl[0];
	for(int i=1;i<n;i++){
		scanf ("%d%d",&zbl[i],&yxbl[i]);
		y[i]=1.0*yxbl[i]/zbl[i];
		if(y[i]-x>0.05){
			printf("better\n");
		}
		else if(x-y[i]>0.05){
			printf("worse\n");
		}
		else {
			printf("same\n");
		}
	}
	return 0;
}

	
	




