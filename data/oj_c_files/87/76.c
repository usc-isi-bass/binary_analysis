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
   int a,b,c,d,e,f;
   int n=1;
   while(n)
   {
      scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
      n=a+b+c+d+e+f;
      if(n==0)
      {
         break;     
      }
      int s;
      s=(d+12-a)*3600-b*60+e*60-c+f;
      printf("%d\n",s);
      //scanf("%d",&a);
   }
   return 0; 
}
