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
	
	int n,x,y;
	double rule,m;
	scanf("%d",&n);
	int *a
		=(int*)malloc(sizeof(int)*n);
    int *b
		=(int*)malloc(sizeof(int)*n);
	int i;
	scanf("%d %d",&x,&y);
	rule=1.0*y/x;
	for(i=0;i<n-1;i++){
		scanf("%d %d",&a[i],&b[i]);
		
	}
	for(i=0;i<n-1;i++){
	    m=1.0*b[i]/a[i];
		if(m>rule+0.05){printf("better\n");}
		else if(m<rule-0.05){printf("worse\n");}
		else {printf("same\n");}
	}
	return 0;
}