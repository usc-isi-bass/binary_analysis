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
    int n,i,a,b,c;
    i=1;
    scanf("%d",&n);
    b=0;
    c=0; 
    while(i<=n)
    {
               scanf("%d",&a);
               if(a>b)
               {
                      if(c<b)
                      {
                             c=b; 
                      } 
                      b=a; 
               } 
               else
               {
                   if(c<a)
                   {
                          c=a; 
                   } 
               } 
               i++; 
                
    }
    printf("%d\n",b);
    printf("%d\n",c); 
    return 0; 

} 