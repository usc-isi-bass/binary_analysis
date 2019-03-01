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
	int sz[100],n;
	scanf("%d\n",&n);
	int i;
	for(i=1;i<=n;i++){
		if(i<n){
			scanf("%d ",&sz[i-1]);
		}
		else{
			scanf("%d",&sz[i-1]);
		}
	}
	for(i=n;i>=1;i--){
		if(i>1){
			printf("%d ",sz[i-1]);
		}
		else{
			printf("%d",sz[i-1]);
		}
	}
	return 0;
}