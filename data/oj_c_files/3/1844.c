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
	int i;
	int sz[1000];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int he[1000][1000];
	int j;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(i!=j){
			he[i][j]=sz[i]+sz[j];
			}
		}
	}
	int t=0;
		int d=1;
	for(j=0;j<n&&d==1;j++){
		for(i=0;i<n;i++){
			if(i!=j){
				if(he[i][j]==k){
					printf("yes");
					d=0;
                                        break;
				}
			}
			t++;
		}
	}
	if(t==n*n){
		printf("no");
	}
	return 0;
}
