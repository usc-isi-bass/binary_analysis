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
    int n, i, k, c=0, m=50001, x=0, sz[50001], a[50001], b[50001];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d%d", &a[i], &b[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]<m){
			m=a[i];
			}	
		}
	for(i=0; i<n; i++){
		if(b[i]>x){
			x=b[i];
			}	
		}
	for(i=m; i<=x; i++){
		sz[i]=1;
	}
	for(i=0; i<n; i++){
		for(k=a[i]; k<b[i]; k++){
			sz[k]=0;
		}
	}
   for(i=m; i<x; i++){
       if(sz[i]==1){
		   c=1;break;
	   }else{
	   c=0;
	   }
   }
   if(c==0){
	   printf("%d %d", m, x);
   }else{
	   printf("no");
   }
	return 0;
}

