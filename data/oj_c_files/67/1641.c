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

int main (){
int n,i;
double t;
int a[100],b[100];
scanf("%d",&n);
scanf("%d%d",&a[0],&b[0]);
	t=1.0*b[0]/a[0];
	for (i=1;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
		if(1.0*b[i]/a[i]-t>0.05){
			printf("better\n");
		}
		else if(t-1.0*b[i]/a[i]>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}

	return 0;
}
