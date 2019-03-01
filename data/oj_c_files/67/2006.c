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
double m,p,c,q; 
for(i=0;i<n;i++){		
		scanf("%lf%lf",&m,&p);
		if(i==0){
	c=p/m;
		}
	else{
	q=p/m;
	if(q-c>0.05){
	printf("better\n");
	}
	else if(c-q>0.05){
	printf("worse\n");
	}
	else{
	printf("same\n");
	}
	}
	}
return 0;
}