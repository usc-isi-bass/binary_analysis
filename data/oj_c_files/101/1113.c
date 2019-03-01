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
   int a,b,c;
  for(a=0;a<=2;a++)
   for(b=0;b<=2;b++)
    {
      if(a==b)
      continue;
    }
     for(c=0;c<=2;c++)
      {
        if(a==b&&b==c)
         continue;
        else
         
         cout<<"BCA"<<endl;
         break;
       }
 return 0;
}