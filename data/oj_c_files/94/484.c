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
	int n,s[500],i,z[500],m=0,k,j,r,l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(s[i]));
		if((s[i])%2==1){
			z[l]=s[i];
			m++;
			l++;
		}
	}
	for(j=m-1;j>0;j--){
		for(r=0;r<j;r++){
			if(z[r]>z[r+1]){
				int t;
				t=z[r+1];
				z[r+1]=z[r];
				z[r]=t;

			}
		}
	}
	for(k=0;k<m;k++){
		if(k<m-1){
	printf("%d,",z[k]);
	}
		if(k==m-1){
			printf("%d",z[k]);
	}
	}
		return 0;

}