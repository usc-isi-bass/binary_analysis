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
    char a[50],b[50];
    scanf("%s %s",a,b);
    int j,q,p=0,l;
    for(;;)
    {
       for(j=p;;j++)
       {
         if(a[0]==b[j])
         {    
           p=j;    
           break;    
         }  
       }  
       for(l=1;a[l]!='\0';l++)
       {
           if(a[l]!=b[j+l])
           {  
              q=1;
              break;
           }
           else q=0;
       }
       if(q==0)
         break;
    }
       printf("%d\n",p);
      return 0;   
}    