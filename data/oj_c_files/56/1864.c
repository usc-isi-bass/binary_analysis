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
  int a[6],b[6],m,n;
  scanf("%d",&m);
  a[0]=m%10;
  a[1]=(m%100-m%10)/10;
  a[2]=(m%1000-m%100)/100;
  a[3]=(m%10000-m%1000)/1000;
  a[4]=(m%100000-m%10000)/10000;
  if (a[4]!=0) { n=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];printf("%d\n",n);}
  else {
         if(a[3]!=0) {n=a[0]*1000+a[1]*100+a[2]*10+a[3];printf("%d\n",n);}
         else {
                if(a[2]!=0) {n=a[0]*100+a[1]*10+a[2];printf("%d\n",n);}
                else{
                      if(a[1]!=0){n=a[1]*10+a[0];printf("%d\n",n);}
                      else {printf("%d\n",a[0]);}
                     }
               }
       }
}  
  