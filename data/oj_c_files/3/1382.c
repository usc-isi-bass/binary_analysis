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
	int m=0,k,n,i=0,j=0,a[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	i=0;
	for(j=0;j<n;j++){
		i=0;
		for(i=0;i<n;i++){
			if(i!=j){
				if((a[i]+a[j])==k){
					m=1;
					break;
				}
			}
		}
	}
	if(m==1){printf("yes");}
	else{printf("no");}
return 0;
}