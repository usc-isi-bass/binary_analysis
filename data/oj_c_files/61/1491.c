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

int F(int n);
int main(){int a[100];
 int n, result,i;
 scanf("%d", &n);
 for(i=0;i<n;i++){
	 scanf("%d",&a[i]);}
for(i=0;i<n-1;i++){
	printf("%d\n",F(a[i]));}
printf("%d",F(a[n-1]));
	

 return 0;
}



  int F(int n){
   if(n==0) 
      return 0; 
      if(n==1) 
      return 1; 
      return F(n-1)+F(n-2);

   }


