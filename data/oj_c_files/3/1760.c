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
	int n,k;
	scanf("%d %d",&n,&k);
	int sz[1000];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int j,e,a;
	for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			if(sz[i]>sz[i+1]){
				e = sz[i];
				sz[i] = sz[i+1];
				sz[i+1] = e;
			}
		}
	}
	a = 0;
	if(sz[n-1]+sz[n-2]<k){
		printf("no");
	} else {
		if(sz[0]+sz[1]>k){
			printf("no");
		} else {
			for(i=0;i<n-1;i++){
				for(j=i+1;j<n;j++){
					if(sz[i]+sz[j]==k){
						printf("yes");
						a = 1;
						break;
					}
				}
				if(a==1){
					break;
				}
			}
			if(a==0){
				printf("no");
			}
		}
	}
	return 0;
}