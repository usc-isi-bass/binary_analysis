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
	int n,i,j,a,b;
	int sz[100][2];
	double c,d;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	c=1.0*b/a;
	for(i=1;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=1;i<n;i++){
			d=1.0*sz[i][1]/sz[i][0];
			if(d-c>0.05){
				printf("better\n");
			}else if(c-d>0.05){
				printf("worse\n");
			}else {
				printf("same\n");
			}
	}
	return 0;
}
