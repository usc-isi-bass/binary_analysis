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
 int a,b,c,d;  
 scanf("%d",&a); 
 for(b=3;b<=a/2;b+=2) 
 { 
  for(c=2;c<=sqrt(b);c++)   
   if(b%c==0) break;
  if(c>sqrt(b))   
   d=a-b;
  else
   continue;    
  for(c=2;c<=sqrt(d);c++) 
   if(d%c==0) break; 
  if(c>sqrt(d)) 
   printf("%d %d\n",b,d);
 } 
}