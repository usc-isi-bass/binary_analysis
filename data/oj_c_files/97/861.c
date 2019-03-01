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

int main()
{
   int n,yibai=0,wushi=0,ershi=0,yishi=0,wu=0,yi=0;
   scanf("%d",&n);
   int a,b;
      a=n%10;
	  b=(n/10)%10;
   
	  if(a<5){
	  yi=a;
	  wu=0;
	  }
      else{
	   yi=a-5;
	   wu=1;
   }
   
      if(b<5){
	   ershi=b/2;
	   yishi=b%2;
	   wushi=0;
   }
       else {
	   wushi=1;
	   ershi=(b-5)/2;
	   yishi=(b-5)%2;
   }
   yibai=n/100;
   printf("%d\n%d\n%d\n%d\n%d\n%d\n",yibai,wushi,ershi,yishi,wu,yi);
	 return 0;
}