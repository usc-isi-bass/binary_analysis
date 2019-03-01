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

int main()
{
	int n,a1,a2,b1,b2;
	scanf("%d%d%d",&n,&a1,&a2);
	float x,y;
	x=(float)a2/a1;
	for(int i=0;i<n-1;i++){
		scanf("%d%d",&b1,&b2);
		y=(float)b2/b1;
		if((y-x)>0.05){
			printf("better\n");
		}
		else if((x-y)>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}

	