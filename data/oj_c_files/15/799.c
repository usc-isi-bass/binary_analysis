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
	int n,x=2,y=2;
	scanf("%d",&n);
	int a[ROW][COL],i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		 
		for(j=0;j<n;j++){
			if(a[i][j]==0&&a[i][j+1]==0){
			x++;}
		}
	}
    for(j=0;j<n;j++){
		 
		for(i=0;i<n;i++){
			if(a[i][j]==0&&a[i+1][j]==0){
			y++;}
		}
	}
	int s;
	s=(x/2-2)*(y/2-2);
	printf("%d",s);
	return 0;
}


