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
	int n,k,i,a[1000],b[1000],c;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j=0;
	for(i=0;i<n;i++){
		b[j]=a[i];
		j++;
	}
	for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(i!=j){
			c=a[i]+b[j];
			if(c==k){
				printf("yes");
				break;
			}else{
				if(i==n-1&&j==n-2){
					printf("no");
					break;
				}
			}
		}
	}
	if(c==k){
		break;
	}else{
		if(i==n-1&&j==n-2){
			break;
		}
	}
	}
	return 0;
}