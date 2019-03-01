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
 int n,i,j;
 double k,m,t;
 double a[100][2];
 scanf("%d",&n);
 for(i=0;i<n;i++){
	 for(j=0;j<2;j++){
		 scanf("%lf",&a[i][j]);
	 }
 }
 k=a[0][1]/a[0][0];

 for(i=1;i<n;i++){
	 if(  (k-a[i][1]/a[i][0])>0.05  )   {printf("worse\n");}
      else   if(  (a[i][1]/a[i][0]-k)>0.05  )   {printf("better\n");}
      else {printf("same\n");}
 }
 return 0;
}