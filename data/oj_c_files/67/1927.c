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
	int n,i;
	int a[100],b[100];
	double x,y;
	int r[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	x=1.0*b[0]/a[0];
	for(i=1;i<n;i++){
		y=1.0*b[i]/a[i];
		if(y-x>0.05){
			r[i]=1;
		}
		else if(x-y>0.05){
			r[i]=-1;
		}
		else r[i]=0;
	}
	for(i=1;i<n;i++){
		switch(r[i]){
		case 1:
			printf("better\n");
			break;
		case 0:
			printf("same\n");
			break;
		case -1:
			printf("worse\n");
			break;
		}
	}
	return 0;
}