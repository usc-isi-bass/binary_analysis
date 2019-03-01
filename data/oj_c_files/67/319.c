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


int main(int argc, char* argv[])
{
	double a[100],b[100];
	int i,j,k,n;
	double c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=(b[i]/a[i])*100;
	}
	for(i=1;i<n;i++){
		if(c[i]-c[0]>5){
			printf("better\n");
		}
		if(c[0]-c[i]>5){
			printf("worse\n");
		}
		if(c[i]-c[0]<=5&&c[0]-c[i]<=5){
			printf("same\n");
		}
	}
	return 0;
}
