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
int n,i,a[100],b[100];
double x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	y=(float)b[0]/a[0];
	for(i=1;i<n;i++){

		x=(float)b[i]/a[i]-y;
		
		if(x>0.05){
			printf("better\n");
		}
		else if(x<-0.05){
			printf("worse\n");
		}
		else if(x<=0.05&&x>=-0.05){
			printf("same\n");
		}
	}
	return 0;
}

