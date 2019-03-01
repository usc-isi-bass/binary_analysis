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
	int n,i,j=0,k=0;
	double b[50],a[50],m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char s[10];
		scanf("%s%lf",&s,&m);
		if(strcmp(s,"male")==0){
			a[j]=m;
			j++;
		}
		else{
			b[k]=m;
			k++;
		}
	}
	int c;
	for(c=1;c<=j;c++){
		for(i=0;i<j-c;i++){
			if(a[i]>a[i+1]){
				m=a[i];
				a[i]=a[i+1];
				a[i+1]=m;
			}
		}
	}
	for(c=1;c<=k;c++){
		for(i=0;i<k-c;i++){
			if(b[i]<b[i+1]){
				m=b[i];
				b[i]=b[i+1];
				b[i+1]=m;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%.2lf ",a[i]);
	}
	for(i=0;i<k-1;i++){
		printf("%.2lf ",b[i]);
	}
	printf("%.2lf",b[k-1]);
	return 0;
}


