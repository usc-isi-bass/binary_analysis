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
	scanf("%d",&n);
	double sz[1000],sa[1000];
	for(i=0;i<n;i++){
       scanf("%lf %lf",&sz[i],&sa[i]);
	if(i>0){
		if(sa[i]/sz[i]-sa[0]/sz[0]>0.05){
			printf("better\n");
		}
		else if(sa[0]/sz[0]-sa[i]/sz[i]>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	}
	return 0;
}
