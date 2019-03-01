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

int main()
{   int date,day,i,j;
	int a[11][11]={0},t[11][11];
	scanf("%d %d",&a[5][5],&date);
	for(day=1;day<=date;day++){
		for(i=1;i<10;i++){
			for(j=1;j<10;j++){
				t[i][j]=a[i][j]*2+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
			}
		}	
		for(i=1;i<10;i++){
			for(j=1;j<10;j++){
				a[i][j]=t[i][j];
			}
		}
	}
	for(i=1;i<10;i++){
		if(i!=1){
			printf("\n");
		}
		for(j=1;j<10;j++){
			if(j!=1){
				printf(" ");
			}
			printf("%d",a[i][j]);
		}
	}
	return 0;
}