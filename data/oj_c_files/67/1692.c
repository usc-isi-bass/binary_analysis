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
	double a,b;
	scanf("%d",&n);
	struct lf{
		int x,y;
	}*lfs;
	lfs=(struct lf*)malloc(sizeof(struct lf)*n);
	for (i=0;i<n;i++){
		scanf("%d%d",&(lfs[i].x),&(lfs[i].y));
	}
	a=(1.0*(lfs[0].y))/(lfs[0].x);
	for (i=1;i<n;i++){
		b=(1.0*(lfs[i].y))/(lfs[i].x);
		if (b-a>0.05){
			printf("\nbetter");
		}else if(a-b>0.05){
			printf("\nworse");
		}else{
			printf("\nsame");
		}
	}
	return 0;
}
