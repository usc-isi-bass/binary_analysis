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
	int n;
	scanf("%d",&n);
	int sz[100][2];
	for(int i=0;i<n;i++){
		scanf("%d%d",&sz[i][0],&sz[i][1]);
	}
	double c=1.0*sz[0][1]/sz[0][0];
	for(int k=1;k<n;k++){
		if(1.0*sz[k][1]/sz[k][0]-c>0.05){
			printf("better\n");
		}
		else if(c-(1.0*(sz[k][1])/(sz[k][0]))>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}