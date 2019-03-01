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

int main ()
{
   char x[50],y[50];
   int i;
   for(i=0;i<50;i++)
  {
   scanf("%c",&x[i]);
   if (x[i]==32)
   break;
   }
   for(i=0;i<50;i++)
  {
   scanf("%c",&y[i]);
   if (y[i]==32)
   break;
   }
   int m=strlen(x),a=0;
   for(i=0;i<50;i++)
   {
      if(y[i]==x[0])
      { a=i;
    break;}
    }
   printf("%d",a);  
   return 0; 
}