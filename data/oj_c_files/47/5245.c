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
	int i,n;
	int h[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&(h[i]));
	}
	for(i=n;i>0;i--){
		if(i==1){
			printf("%d",h[1]);
		}else{
		printf("%d ",h[i]);
		}
	}
	return 0;
}
	