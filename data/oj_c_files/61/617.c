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
	int n,a[20],b[20],i,j,k,result[20];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	result[0]=1;
	result[1]=1;
	for(k=1;k<=n;k++){
		if(a[k-1]>=3){
			for(j=2;j<=a[k-1]-1;j++){
				result[j]=result[j-1]+result[j-2];
			}
			b[k-1]=result[a[k-1]-1];
			printf("%d\n",b[k-1]);
		}else if(a[k-1]==1||a[k-1]==2){
			printf("1\n");
		}
	}
	return 0;
}