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
	int n,sum=0,i;
	double f;
	scanf("%d",&n);
        double *c=(double *)malloc(sizeof(double)*n);//????c?????????????
	int *a=(int *)malloc(sizeof(int)*n);         //a??????
	int *b=(int *)malloc(sizeof(int)*n);         //b????????
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	f=(double)sum/n;                             //??????????????
	for(i=0;i<n;i++){
		c[i]=(a[i]-f)>0?a[i]-f:f-a[i];       //??????????
	}
	int m=0;
	for(i=0;i<n;i++){
		if(c[i]>c[m]){
			m=i;                         //????????
		}
	}
	int x=0;
	for(i=0;i<n;i++){
		if(c[i]==c[m]){
			b[x]=a[i];                   //????????????????????b?
			x++;
		}

	}if(x==1){
		printf("%d",b[0]);                   //?????
	}else{
		printf("%d",b[0]);
		for(i=1;i<x;i++){
			printf(",%d",b[i]);
		}
	}
	
	return 0;
}
