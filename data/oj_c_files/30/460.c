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
     int n,fh,a,b,sum;
     cin >>n;
     sum=0;
     for (int i=1;i<=n;i++)
       {  
         a=i;
         fh=1;
         if (a%7==0)  fh=0;
          do
            { 
               b=a % 10;
               a=a / 10;
               if (b==7) fh=0;
             }
          while (a>0);
         sum=sum+i*i*fh;
       }
      cout <<sum;
    return 0;
  }
          
     
     