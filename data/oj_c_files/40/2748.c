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


int main(int argc, char *argv[])
{
  float a,b,c,d,e,s,t=0,m;
   scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
   s=(a+b+c+d)/2;
   m=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos((e*3.1415926)/360),2);
   if(m<0)
   printf("Invalid input");
   else {t=sqrt(m); 
  printf("%.4f",t);}
  return 0;
}
