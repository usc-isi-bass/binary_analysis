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

void main()
{
   long n,b,c;
   scanf("%ld",&n);
   b=(n-n%10000)/10000+(n%10000-n%1000)/100+(n%1000-n%100)+(n%100-n%10)*100+(n%10)*10000;
   if(b%10==0)
     
      b=b/10;
   else b=b;
    if(b%10==0)
     
      b=b/10;
   else b=b; 
    if(b%10==0)
   
      b=b/10;
     else b=b;
printf("%d",b);



}


