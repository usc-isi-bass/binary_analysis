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
{   char a[1000];                                //?????????? 
    int i;
    char b;
    int j=0;
    int c=0;
    while(1)
       {   b=cin.get();
           if(b=='\n')  break;                   // ???? 
           if(b!=32)                            //  ????  ?? 
             {   a[j]=b;
                 j=j+1;
                 if(b!=46)  c=0;
                 else       c=1;
             }
           else                      
             {   c=c+1;
                 if(c>1) continue;           //???1?????? 
                 else   
                   {   a[j]=b;                //????????? 
                       j=j+1;
                   }
             }
       } 
    for(i=0;i<j;i++)   cout<<a[i];
    return 0;
}