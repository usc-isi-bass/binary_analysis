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
   int n,i,j=0,k,p;
   double b[40],e;
   scanf("%d",&n);
   struct a{
	   char s[8];
	   double t;
   }a[40];
   for(i=0;i<n;i++){
	   scanf("%s %lf",a[i].s,&a[i].t);
   }
   for(i=0;i<n;i++){
	   if(strcmp(a[i].s,"male")==0){
		   b[j]=a[i].t;
		   j++;
	   }
   }
   for(k=1;k<j;k++){
		 for(p=0;p<j-k;p++){
			   if(b[p]>b[p+1]){
				   e=b[p];
				   b[p]=b[p+1];
				   b[p+1]=e;
			   }
		 }
   }
	printf("%.2lf",b[0]);
	for(i=1;i<j;i++){
	printf(" %.2lf",b[i]);
	}
	j=0;
    for(i=0;i<n;i++){
	   if(strcmp(a[i].s,"female")==0){
		   b[j]=a[i].t;
		   j++;
	   }
    }
    for(k=1;k<j;k++){
		 for(p=0;p<j-k;p++){
			   if(b[p]<b[p+1]){
				   e=b[p];
				   b[p]=b[p+1];
				   b[p+1]=e;
			   }
		 }
	}
	for(i=0;i<j;i++){
		printf(" %.2lf",b[i]);
	}
	return 0;
}







			
					


