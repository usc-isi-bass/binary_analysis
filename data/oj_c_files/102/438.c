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
	double h[40],tmp;
	int n,i,j,k=0;
	char c[7];   //???female?6???????????????7
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",c,&h[i]);
		if(c[0]=='f'){
			h[i]=(-1)*h[i];
			k++;
		}
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(h[j]>h[j+1]){
				tmp=h[j+1];
				h[j+1]=h[j];
				h[j]=tmp;
			}
		}
	}
	for(i=k;i<n;i++){
		printf("%.2lf ",h[i]);
	}
    for(i=0;i<k-1;i++){
		printf("%.2lf ",(-1*h[i])); //??????-h[i]
	}
	printf("%.2lf\n",(-1*h[k-1]));  //??????????????????????
	return 0;
}