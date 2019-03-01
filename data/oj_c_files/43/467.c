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
    int m,x,y,i,n;//????m  ??????x,y ????i x(y)?1?x(y)??????n
    cin >>m;
    for (x=3;x<=m/2;x++) 
       {
           n=0;              
           for (i=2;i<=x/2;i++) 
              { 
                if (x%i==0) n++;
              }
           if (n==0) 
             {
                 y=m-x;
                 for (i=2;i<=y/2;i++) 
                   { 
                      if (y%i==0) n++;
                   }
             }
           if (n==0) cout <<x <<" " <<y <<endl;
       } 
    return 0; 
}