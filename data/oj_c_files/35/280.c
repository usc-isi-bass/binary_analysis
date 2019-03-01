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
{
	int a[10][10];
	int m,n;
	scanf("%d,%d",&m,&n);
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b;
	
	int c[10],d[10];
	for(i=0;i<m;i++){
		b=-10000; 
		for(j=0;j<n;j++){
			
			if(a[i][j]>b){
				c[i]=a[i][j];
				b=a[i][j];
				
			}
		}
	}
	
    
	for(j=0;j<n;j++){
		b=100000;
		for(i=0;i<m;i++){
			
			if(a[i][j]<b){
				b=a[i][j];
				d[j]=a[i][j];
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==c[i]&&a[i][j]==d[j]){
				printf("%d+%d",i,j);
				return 0;
			}
		}
	}
	printf("No");
	
	return 0;
}
