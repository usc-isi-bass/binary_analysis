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

void main(){
	int n,k,i,j,p,q;
	int a[1000],b[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
                   b[i]=a[i];
	}
	for(j=0;j<n;j++){
		for(p=0;p<n;p++){
			if(p!=j){
				if(a[j]+b[p]==k){
					q=1;
				}
			}
		}
	}
	if(q==1){
		printf("yes\n");
	}else{
		printf("no\n");
	}
}





