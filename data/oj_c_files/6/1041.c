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
	int k;
	int m,n;
	int a[101][101];
	int u,i,j,sum;
	scanf("%d",&k);
	for(u=0;u<k;u++){
		sum=0;
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
				if((i==0)||(j==0)||(i==m-1)||j==(n-1)){
					sum+=a[i][j];
				}
			}
		}
		if(u!=k-1){
			printf("%d\n",sum);
		}
		else if(u==k-1){
			printf("%d",sum);
		}
	}

	return 0;
}