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
	int a[max][max];
	int k,m,n,i,j,b;
	int sum=0;
	scanf("%d",&k);
	for(b=0;b<k;b++){
                scanf("%d%d",&m,&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++){
			sum=sum+a[i][0];
		}
		for(i=0;i<m;i++){
			sum=sum+a[i][n-1];
		}
		for(j=1;j<n-1;j++){
			sum=sum+a[0][j];
		}
		for(j=1;j<n-1;j++){
			sum=sum+a[m-1][j];
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}
