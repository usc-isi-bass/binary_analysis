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
    int a,max=0,secmax=0;
    char b;
    
    do
    {
         scanf("%d%c",&a,&b);
         if (max<a){
                    secmax=max;
                    max=a;
                    }
         else if(a<max&&a>secmax){
              secmax=a;
              }
         else if(a==max||a==secmax){}
         else if(a<secmax){}
      
      
    }
    while(b==',');
         if (secmax==0){printf("No\n");}
         
         else{printf("%d\n",secmax);}
        
    
    
 
      
       
       
  
  	
  return 0;
}
