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
	int n,i,p,sum,m,k;
	sum=1;
	int a[1000],b[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(p=0;p<n;p++){
		for(i=0;i<n;i++){
			if(b[p]+a[i]==k){
				m=0;
			}
			else{
				m=1;
			}
			sum*=m;
		}
	}
	if(sum==0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
