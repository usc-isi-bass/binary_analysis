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

int n;
scanf("%d",&n);

int i,j,k,e;
double result=0;
int a,b;
for(i=0;i<n;i++){
scanf("%d",&k);
   a=1;
   b=2;
   result=0;
    for(j=1;j<=k;j++){
		if(j==1){
		result+=1.0*b/a;
		}else{
		e=b;
		b=a+b;
		a=e;
		result+=1.0*b/a;
		}
		
	
	}

printf("%.3lf",result);

printf("\n");
}







return 0;
}