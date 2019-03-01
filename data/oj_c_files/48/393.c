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
	int m,n,i,j,k,a[11][11],b[11][11];
	for(m=0;m<11;m++){
		for(n=0;n<11;n++){
			a[m][n]=0;
			b[m][n]=0;
		}
	}
	scanf("%d%d",&m,&n);
	a[5][5]=m;
	b[5][5]=m;
	for(i=0;i<n;i++){
		for(k=1;k<10;k++){
			for(j=1;j<10;j++){
				b[k][j]=2*a[k][j]+a[k-1][j-1]+a[k-1][j]+a[k-1][j+1]+a[k][j-1]+a[k][j+1]+a[k+1][j-1]+a[k+1][j]+a[k+1][j+1];
			}
		}
		for(k=0;k<11;k++){
			for(j=0;j<11;j++){
				a[k][j]=b[k][j];
			}
		}
	}
	for(k=1;k<10;k++){
		printf("%d",a[k][1]);
		for(j=2;j<10;j++){
			printf(" %d",a[k][j]);
		}
		if(k<9){
			printf("\n");
		}
	}
	scanf("%d",&n);
	return 0;
}