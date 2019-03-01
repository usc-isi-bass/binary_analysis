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

main()
{  
    int reverse(int n);
    int X;
    int R;
    int i;
    for(i=0;i<=5;i++)
    {
    scanf("%d",&X);
    R=reverse(X);
    printf("%d\n",R);
    }
}      

 int reverse(int n) 
{
   int r=0,q,N;
   if(n>0)
   {
          while(n>0)
    {
       q=n%10;
       r=r*10+q;
       n=n/10;    
    }
    return(r);
   }
   if(n<0)
   {
          while(n<0)
     {   
       N=0-n; 
       q=N%10;
       r=r*10+q;
       N=N/10;
       n=0-N;      
     } 
   return(-r);
    }
    if(n==0)
    return(n);  
}

