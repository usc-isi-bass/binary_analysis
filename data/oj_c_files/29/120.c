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

int fbnq(int x);
int main(){
    int n,i,k,sz[100];
	double result;
    scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&(sz[i]));
        result=0;
		for(k=0;k<sz[i];k++){
		    result+=fbnq(k+1)*1.0/fbnq(k);
		}
		printf("%.3lf\n",result);
	}
     

	return 0;
}
int fbnq(int x){
	if(x==0){
	   return 1;
	}
     if(x==1){
	   return 2;
	}
	 return fbnq(x-1)+fbnq(x-2);
} 
