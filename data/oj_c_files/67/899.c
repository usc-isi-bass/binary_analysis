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
int n,i,t=0;
char xm[300][10];
float tw[300];
double z[300];
double yx[300];
double x[300];

scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%lf",&z[i]);
    scanf("%lf",&yx[i]);
    x[i]=yx[i]/z[i];
}


for(i=1;i<n-1;i++){
    if(x[0]-x[i]>0.05){
	   
	   printf("worse");
	   printf("\n");
	}else if(x[i]-x[0]>0.05){
	   
	   printf("better");
	   printf("\n");
	}else{
	   
	   printf("same");
	   printf("\n");
	}
 
	
	
}

	   
	  if(x[0]-x[n-1]>0.05){
	   
	   printf("worse");

	}else if(x[n-1]-x[0]>0.05){
	   
	   printf("better");
	
	}else{
	   
	   printf("same");
	 
	}
	 


return 0;
}