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

 int reverse(int num)
{   
    int i=0;
   for (;num!=0;)   
   {
   i=i*10+num%10;
   num=num/10;
   }
   return (i);
}
   
main ()
{  
   int x[6],p[6],i;
   for (i=0;i<6;i++)
   scanf ("%d",&x[i]); 
   for (i=0;i<6;i++)
   {
       if (x[i]>=0)
          p[i]=reverse(x[i]);
       else 
          p[i]=-reverse(-x[i]);
    }
     for (i=0;i<6;i++)
    printf ("%d\n",p[i]);
    getchar ();
    getchar ();
 }
