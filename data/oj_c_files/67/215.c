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
	float a[1000],b[1000];
	int n,i;
	scanf("%d\n",&n);
	scanf("%f %f\n",&a[0],&b[0]);
	for(i=1;i<n;i++){
		scanf("%f %f\n",&a[i],&b[i]);
		if((b[i]/a[i]-b[0]/a[0])>0.05){
			printf("better\n");
		}
		else if((b[0]/a[0]-b[i]/a[i])>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}