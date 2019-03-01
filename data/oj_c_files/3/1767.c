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
	int sz[1000];
	scanf("%d%d",&n,&k);
	int i;
	i=0;
	while(i<n){
	scanf("%d",&sz[i]);
	i++;
	}
	int f=0;
	int sum;
	for(i=0;i<n;i++){
		for(int t=0;t<n;t++){
			sum=sz[i]+sz[t];
			if(sum==k){
				f=1;
				break;
			}
		}
	}
	if(f==1){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
