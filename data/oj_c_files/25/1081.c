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

int a[1005];
int main()
{
 a[0] = 1;
 int  l = 1,n,t = 0,i;
 scanf("%d",&n);
 while(n--)
 {
  for(i = 0;i < l; i++)
     a[i]*=2;   
   for(i = 0;i < l; i++)
   {
     if(a[i]>=10)
     {
      a[i+1] += a[i] / 10;
      a[i] %= 10;
     }
   }
   
   while(a[l])
   {
     if(a[l]>=10)
     {
      a[l+1] += a[l]/10;
      a[l] %= 10;
     }          
     l++;
   }
 }
 for(i = l-1;i >= 0; i--)
 printf("%d",a[i]);
 
 return 0;    
}
