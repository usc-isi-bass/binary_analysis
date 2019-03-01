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





int main() {
	int row ,col,a[100][100];
	int i,j,k;
	int n=0;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i=i+1){
		for(j=0;j<col;j=j+1){
			scanf("%d",&a[i][j]);
		}
	}
	for(k=0;k<=100;k=k+1){
		for(i=k;i<col-k;i=i+1){
			if(n!=row*col){
			printf("%d\n",a[k][i]);
			n=n+1;
			}
		
		}
		for(i=k+1;i<row-k;i=i+1){	if(n!=row*col){
		
			printf("%d\n",a[i][col-1-k]);
			n=n+1;}
		}
		for(i=col-2-k;i>=k;i=i-1){	if(n!=row*col){
		
			printf("%d\n",a[row-1-k][i]);
			n=n+1;}
		}
		for(i=row-2-k;i>=1+k;i=i-1){	if(n!=row*col){
		
			printf("%d\n",a[i][k]);
			n=n+1;}
		}
	}
	return 0;
}