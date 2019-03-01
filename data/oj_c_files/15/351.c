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
	int n,i,j;
	scanf("%d",&n);
	int A[1000][1000];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int x;
			scanf("%d",&x);
			A[i][j]=x;
		}
	}
	int a,b,c,d;
	int p;
	for(i=1;i<n-1;i++){
		for(j=1;j<n-1;j++){
	if(A[i][j]==0&&A[i][j-1]==255&&A[i][j+1]==0&&A[i-1][j]==255&&A[i+1][j]==0){
		a=i;
		b=j;
	}
	else if(A[i][j]==0&&A[i][j-1]==0&&A[i][j+1]==255&&A[i-1][j]==0&&A[i+1][j]==255){
		c=i;
		d=j;
	}
	}
	}
	p=(c-a-1)*(d-b-1);
    printf("%d",p);
	return 0;
}
