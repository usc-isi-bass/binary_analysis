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
	int n,a,b,s,l,i;
	double c;
	scanf("%d%d%d",&n,&a,&b);
	c=1.0*b/a;
    for(i=0;i<n-1;i++){
		scanf("%d%d",&s,&l);
		double f=1.0*l/s;
		if(f-c>0.05){
			printf("better\n");
		}else if(f-c>-0.05){
			printf("same\n");
		}else{
			printf("worse\n");
		}
	}
	return 0;
}
