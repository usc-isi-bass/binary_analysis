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

main ()
{
   int n;
   scanf ("%d",&n);
   int a;
   int b;
   
   int i;
   if (n<=4)
   printf ("empty");
   else 
   {
   for (a=3;a<=(n-2);a++)
      {   
         for (i=2;i<=a;i++)
             {
                b=a+2;           
                if (a%i==0)
                break ;
                else if (b%i==0)
                break ;
                                 
                           
             }  
           if (i==a)
           printf ("%d %d\n",a,b);   
    
      }     
      }
     getchar ();
     getchar ();
     
     
  
     
}