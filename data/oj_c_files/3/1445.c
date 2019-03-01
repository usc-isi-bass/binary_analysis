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
	int n,x,i,k,q,y=0;
	int a[1000];
	scanf("%d%d",&n,&k);
	for(i=0,q=0;i<n,q<n;i++,q++){
		scanf("%d",&x);
        a[i]=x;
	}
    for(i=0;i<n-1;i++){
		for(q=i+1;q<n;q++){
			if(a[i]+a[q]==k){
				y=1;
			break;
			}
		}
		if(y==1){
		break;
		}
	}
	if(y==1){
		printf("yes");
	}else{
		printf("no");
    }
	return 0;
}