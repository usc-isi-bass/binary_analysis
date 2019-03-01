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

int main(){                 
   char a[100],b[100];                 
   int i,j,l,r,c=0;                 
   scanf ("%s",a);                 
   scanf ("%s",b);               
     l=strlen(a);               
     r=strlen(b);               
     for (i=0;i<r;i++)    {             
        for(j=0,c=0;j<l;j++) 
       {                      
          if(a[j]==b[i+j])          
                  c++;                
        }                     
    if (c==l)                   
     {printf("%d",i);                           break;               
          }               
     }         
           return 0;     
}                