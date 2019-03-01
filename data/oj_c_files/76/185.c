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
	int a[10000],b[10000],c[10000],i,k,n;
	int max=0,min=10000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<min){min=a[i];}
		if(b[i]>max){max=b[i];}
	}
	for(i=2*min;i<=2*max;i++){
		c[i]=1;
	}
	for(i=0;i<n;i++){
		for(k=2*a[i];k<=2*b[i];k++){
			c[k]=0;
		}
	}
	for(i=2*min;i<=2*max;i++){
		if(c[i]==1){
			printf("no");
			return 0;
		}
	}
	printf("%d %d",min,max);
    return 0;	
}

