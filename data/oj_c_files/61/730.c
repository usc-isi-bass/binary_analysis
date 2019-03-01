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

int main (){
	int n,i,a,j,b[100];
    scanf("%d",&n);
   for(i=0;i<n;i++){
	   scanf("%d",&a);
	   for(j=0;j<100;j++){
		   if(j==0||j==1){b[j]=1;}
		   else {b[j]=b[j-1]+b[j-2];}
	   }
       printf("%d\n",b[a-1]);
   }
  return 0;
}