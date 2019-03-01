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
   int N,i,m;
   int b=0;
   int a[500];
   int tmp;
   scanf("%d\n",&N);
   for(i=0;i<N;i++)
   {
   scanf("%d",&a[i]);
   if(a[i]%2!=0)
        {
           a[b]=a[i];
           b++;
        }
   }
    for (m=0;m<b;m++)
          {
             for(i=1;i<b-m;i++)
             {   if(a[i-1]>a[i])
                 {
                   tmp=a[i-1];
                   a[i-1]=a[i];
                   a[i]=tmp;
                 }
             }
          } 
    for(i=0;i<b;i++)                
    {
         printf("%d",a[i]);
         if(i<b-1)
         printf(",");         }   
    return 0;
    
}