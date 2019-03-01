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

int a[row][col];
int main(){
	int r,c,i,j,n;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d\n",&a[i][j]);}
	}
	for(n=0;n<=c+r-2;n++){
		for(i=0;i<=n&&i<r;i++){
			j=n-i;
			if(j<c){
			printf("%d\n",a[i][j]);
			}
		}
	}
	
		
		

	
	return 0;
}