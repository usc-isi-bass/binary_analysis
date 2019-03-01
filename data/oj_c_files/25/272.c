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
   double s[101];
   int i;
   
   scanf("%d",&n);

   s[0]=1;
   s[1]=2;
   for(i=2;i<=n;i++){
	   s[i]=s[i-1]*2;
   }
		
   printf("%.0lf",s[n]);
   

	return 0;
}

