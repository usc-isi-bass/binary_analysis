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


int main(int argc, char* argv[])
{
   double n,i,k=1;
   scanf("%lf",&n);
   if(n==0){
	   printf("1");
   }else{
	   for(i=0;i<n;i++){
           k=2*k;
	   }
       printf("%.0lf",k);
   }
	return 0;
}
