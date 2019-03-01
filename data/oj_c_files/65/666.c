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
	int n,a[MAX],b[MAX],i,j,k;
	k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		j=a[i]-b[i];
		if(j==-1||j==2){
			k++;
		}else if(j==1||j==-2){
			k--;
		}else if(j==0){
			k=k;
		}
	}
	if(k>0){
		printf("A");
	}else if(k==0){
		printf("Tie");
	}else if(k<0){
		printf("B");
	}
	return 0;
}