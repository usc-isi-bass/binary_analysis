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
	int data[100][3];
	int n,a,b;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	double c;
	c=1.0*b/a;
	int i,j;
	for(i=0;i<n-1;i++){
		for (j=0;j<2;j++){
			scanf("%d",&(data[i][j]));
		}
	}
    float buff=0;
	for(i=0;i<n-1;i++){
		
		
		
		buff=(float)data[i][1]/data[i][0];
		if ((buff-c) > 0.05){
			printf("better\n");
		}
		else if ((c-buff) > 0.05){
			printf("worse\n");
		}
		else if ((c-buff)<0.05||(buff-c)<0.05){printf("same\n");}
		/*printf("%f,%f\n",c,buff);*/
		
	}
	return 0;
}