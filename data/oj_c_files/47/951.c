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
	int n,i,j;
	scanf("%d",&n);
	int order[10000]={0};
	for(i=0;i<n;i++){
		//printf("i=%d\n",i);
		scanf("%d",&order[i]);
		//printf("i=%d\n",i);
	}
	//printf("i+1=%d\n",order[3]);
	for(j=n-1;j>-1;j--){
		if(j>0){
		printf("%d ",order[j]);
		}else{
		printf("%d",order[j]);
		}
		//if(i<n-1){
		//	printf(" ");
		//}
	}
	return 0;
}