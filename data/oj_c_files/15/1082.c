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
	int a[1000][1000];
	int n,i,k,x,y,z,w,s;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			scanf("%d",&a[i][k]);
		}
	}

	for(i=0;i<n;i++){
		for(k=1;k<n;k++){
			if(a[i][k-1]!=0&&a[i][k]==0&&a[i][k+1]==0&&a[i+1][k]==0){
				x=i;
				y=k;
			}
		}
	}

	for(i=1;i<n;i++){
		for(k=1;k<n-1;k++){
			if(a[i][k-1]==0&&a[i][k]==0&&a[i][k+1]!=0&&a[i-1][k]==0){
				z=i;
				w=k;
			}
		}
	}
	
	s=(z-1-x)*(w-1-y);
	printf("%d",s);

	return 0;
}
