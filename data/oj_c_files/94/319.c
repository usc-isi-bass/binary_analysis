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
	int sz[500],n,i,k,s,d,c,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
    for(k=1;k<=n;k++){
       for(i=0;i<n-k;i++){
		   if(sz[i]>sz[i+1]){
			   s=sz[i+1];
			   sz[i+1]=sz[i];
			   sz[i]=s;
		   }
	   }
	   }
    for(c=0;c<n;c++){
		d=sz[c]%2;
		if(d==1){
		printf("%d",sz[c]);
		}
		break;
	}
    for(e=c+1;e<n;e++){
		d=sz[e]%2;
		if(d==1){
		printf(",%d",sz[e]);
		}
	}
	return 0;
}
