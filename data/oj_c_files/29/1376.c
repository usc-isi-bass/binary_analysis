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
	int m;
	int i,j;
	double e,x,y;
	scanf("%d",&m); 
	int*sz
		=(int*)malloc(sizeof(int)*m);
	for(i=0;i<m;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<m;i++){
		double sum=0;
		x=1.0;
		y=2.0;
		for(j=0;j<sz[i];j++){
			sum+=y/x;
			e=y;
			y=x+y;
			x=e;
		}
		printf("%.3lf\n",sum);
	}

	free(sz);


	return 0;
}