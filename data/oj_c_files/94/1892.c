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
	int n,input[501],i,p,ex;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
		if(input[i]%2==0){i--;n--;}}
	for(i=0;i<n;i++){
		for(p=0;p<n-1;p++){
			if(input[p]>input[p+1]){
				ex=input[p];
				input[p]=input[p+1];
				input[p+1]=ex;}}}
	printf("%d",input[0]);
	for(i=1;i<n;i++){printf(",%d",input[i]);}

	

	
return 0;
}


 