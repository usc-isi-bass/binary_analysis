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

int main(int argc, char* argv[])
{int n,i=0;
	int p,j;
	
	scanf("%d\n",&n);
	struct point{
		float x,y;
	}top[1000];
    
	double distance,max1=0;
	for(i=0;i<n;i++){
		scanf("%f %f\n",&top[i].x,&top[i].y);
	}
	for(p=0;p<n;p++){
	for(j=0;j<n;j++){
			distance=sqrt((top[p].x-top[j].x)*(top[p].x-top[j].x)+(top[p].y-top[j].y)*(top[p].y-top[j].y));
			if(distance>=max1){
				max1=distance;
	}
	}
	}
	printf("%.4f\n",max1);
	return 0;
}

