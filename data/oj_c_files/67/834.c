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
	int n;
	scanf("%d",&n);
	float all[100],fun[100],per[100];
	int i;
	for(i=0;i<n;i++){
		scanf("%f%f",&all[i],&fun[i]);
		per[i]=fun[i]/all[i];
	}
	for(i=1;i<n-1;i++){
		if(per[i]>=per[0]){
			if(per[i]-per[0]>0.05) {printf("better\n");}
			else {printf("same\n");}
		}
		if(per[i]<per[0]){
			if(per[0]-per[i]>0.05) {printf("worse\n");}
			else {printf("same\n");}
		}
	}
	if(per[n-1]>=per[0]){
			if(per[i]-per[0]>0.05) {printf("better");}
			else {printf("same");}
		}
		if(per[n-1]<per[0]){
			if(per[0]-per[i]>0.05) {printf("worse");}
			else {printf("same");}
		}
	return 0;
}
	