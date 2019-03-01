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
	int a[5][5];
	int min;
	int i,j,k,l,result=0;
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++){
		min=a[i][0];
		for(j=0;j<5;j++){
			if(a[i][j]<=min){
				min=a[i][j];
				k=j;
			}
		}
		for(l=0;l<5;l++){

			if(a[l][k]>a[i][k])break;
			if(l==4){
				result=1;
				printf("%d %d %d",k+1,i+1,a[i][k]);
			}

		}
	}
	if(result==0)printf("not found");	
	
	return 0;
}