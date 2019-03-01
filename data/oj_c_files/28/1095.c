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
    int i,j=0,l,x,y;
    char z[1000];
    gets(z);
    
    x=strlen(z);
    for(i=0;i<x;i++)
    {
                 if(z[i]==' ')
                 {
                            j=0;
                 }
                 else
                 {
                     j++;
                 }
                 if(z[i+1]==' '||z[i+1]=='\0')
                 {
                              printf("%d",j);
                              y=1;
                 }
                 if(y==1)
                 {
                         break;
                 }
    }
    for(l=i+1;l<x;l++)
    {
                 if(z[l]==' ')
                 {
                            j=0;
                 }
                 else
                 {
                     j++;
                 }
                 if(z[l+1]==' '||z[l+1]=='\0')
                 {
                              if(j!=0)
                              {
                                  printf(",%d",j);
                                  }
                 }                  
    
     }

       
    
      return 0;
 }
