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
	int a[100],n,i,k,e,t,r=0;
	scanf("%d",&n);
	for (i=0;i<2*n;i++){
		scanf("%d",&a[i]);
	}
	for (k=1;k<=n;k++){
		for (i=0;i<2*n-2*k;i=i+2){
			if(a[i]>a[i+2]){
				e=a[i];
				a[i]=a[i+2];
				a[i+2]=e;
				t=a[i+1];
				a[i+1]=a[i+3];
				a[i+3]=t;
			}
		}
	}
	int p=a[0],q=a[1];
	for (i=0;i<2*n-2;i=i+2){
		if(a[i+2]>q){
			r=1;
			break;
		}
		else if(a[i+2]<=q&&a[i+3]>=q){
			q=a[i+3];
		}
	}
	if(r==1){printf("no\n");}
	else{
		printf("%d %d\n",p,q);
	}
		return 0;
	}


