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
    int n,i,a[10000],b[10000],k,t;
    char result='y';
    scanf("%d",&n);
    for(i=1;i<=n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(t=1;t<n;t++){
		for(k=1;k<n;k++){
			for(i=k+1;i<=n;i++){
				if(a[k]>=a[i]&&a[k]<=b[i]&&b[k]>=b[i]){
					a[k]=a[i];
				}else if(b[k]>=a[i]&&b[k]<=b[i]&&a[k]<=a[i]){
					b[k]=b[i];
				}else if(b[k]>=a[i]&&b[k]<=b[i]&&a[k]>=a[i]){
					a[k]=a[i];
				    b[k]=b[i];
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		if(a[1]<=a[i]&&b[1]>=b[i]){
			result='y';
		}else{
			result='n';
			break;
		}
	}
	if(result=='y'){
		printf("%d %d",a[1],b[1]);
	}else if(result=='n'){
		printf("no");
	}
    return 0;
}
