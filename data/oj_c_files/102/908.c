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
	int n,i,j,k=0,p=0;
	double e;
	double a[40],b[40];
	double h[41];
	char sex[7];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf\n",sex,&h[i]);
		if(strcmp(sex,"male")==0){
			a[k]=h[i];
			k++;
		}
		else{
			b[p]=h[i];
			p++;
		}
	}
	
	for(i=1;i<=k;i++){
		for(j=0;j<k-i;j++){
			if(a[j]>a[j+1]){
				e=a[j];
				a[j]=a[j+1];
				a[j+1]=e;
			}
		}
	}
	for(i=1;i<=p;i++){
		for(j=0;j<p-i;j++){
			if(b[j]<b[j+1]){
				e=b[j];
				b[j]=b[j+1];
				b[j+1]=e;
			}
		}
	}

	for(i=0;i<k;i++)printf("%.2lf ",a[i]);
	for(i=0;i<p;i++){
		if(i==p-1)printf("%.2lf",b[i]);
		else printf("%.2lf ",b[i]);
	}
	return 0;
}
