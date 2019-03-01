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
	int n,i,a,b;
	double sz[50],c;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	c=1.0*b/a;
	for(i=0;i<n-1;i++){
		scanf("%d %d",&a,&b);
		sz[i]=1.0*b/a;
	}
	for(i=0;i<n-1;i++){
		if(sz[i]-c>0.05){
			printf("better\n");
		}
		else if(c-sz[i]>0.05){
			printf("worse\n");
	}
	else{
		printf("same\n");
	}
	}
	return 0;
}

