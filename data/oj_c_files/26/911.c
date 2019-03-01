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
   int i,j,m,n;
    j=0;
    m=0;
  char x[100],*a,y[100];
   gets(x);
  for(a=x;*a!='\0';a++)
     { 
        if(*a!=' ');
           {y[j]=*a;
              j++;}
            
         if(*a==' ')
           {
        
            while(*a==' ')
             {a++; }
             a--;
	        }
              
        }
      y[j]='\0';
    printf("%s",y);

      return 0;

    }