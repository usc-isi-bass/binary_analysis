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
	int n,a,u[100000];

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&u[i]);
		}
		scanf("%d",&a);
	         
		for(int i=0;i<n;i++){
			if(u[i]==a){
			  for(int j=i;j<n-1;j++){
					u[j]=u[j+1];}
				i--;
				n--;}}
		for(int i=0;i<n;i++){
			if(i==n-1){
				printf("%d",u[i]);}
			else{ 
      		printf("%d ",u[i]);}
			  }
			scanf("%d",&n);
	return 0;
	}