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
	int n,a[100][2];
	int i,j;
	double y[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
		scanf("%d\n",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
	
			
				y[i]=1.0*a[i][1]/a[i][0];
			
		
	}
	for(i=1;i<n;i++){
	
			if(y[i]-y[0]>0.05){
				printf("better\n");
			}
			else if(y[0]-y[i]>0.05){
				printf("worse\n");
			}
			else{
				printf("same\n");
			}
		}
	
	return 0;
}