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
	int n,a,b,i;
	int nz[30],ny[30];
	double old,news;
    scanf("%d%d%d",&n,&a,&b);
	old=1.0*b/a;
	for(i=0;i<n-1;i++){
	    scanf("%d%d",&nz[i],&ny[i]);
	}
	for(i=0;i<n-1;i++){
	    news=1.0*ny[i]/nz[i];
		if(news-old>0.05){
		    printf("better\n");
		}
		else if(news-old<-0.05){
		    printf("worse\n");
		}
		else{
		    printf("same\n");
		}
	}


return 0;
}