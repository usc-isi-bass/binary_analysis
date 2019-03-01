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
 int a,b,c,d,e;
 scanf("%d",&a);
if(a==0) printf("0");
else
{
b=a/1000;
 c=(a%1000)/100;
 d=(a%100)/10;
 e=a%10;
 a=b+10*c+100*d+1000*e;
 if((a%10)==0) 
  {
   a=a/10;
   if((a%10)==0) 
    {
     a=a/10;
      if((a%10)==0) a=a/10;
    }
   }
if(e==0) 
{
   printf("%d",e);
   if(d==0)
    { 
      printf("%d",d);
      if(c==0) 
     printf("%d",c);
      }
} 
 printf("%d",a);
}
 return 0;
}
 