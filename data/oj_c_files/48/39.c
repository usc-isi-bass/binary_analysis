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
	int m,n,i,j,r,k,h;
	scanf("%d%d",&m,&n);
	int a[11][11]={0};
	a[5][5]=m;
	for(h=0;h<n;h++){
		int b[11][11]={0};
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			if(a[i][j]!=0){
				for(r=i-1;r<=i+1;r++){
					for(k=j-1;k<=j+1;k++){
						b[r][k]+=a[i][j];
					}
				}
			}
		}
	}
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			a[i][j]+=b[i][j];
		}
	}
	}
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			if(j!=9)
				printf("%d ",a[i][j]);
			else
				printf("%d\n",a[i][j]);
		}
	}
}