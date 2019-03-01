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
      int  i=0,j=0;
      char c[1000];
          gets(c);
      for(i=0;c[i]!='\0';i++){
          if(c[i]!=' '){
            printf("%c",c[i]);
             }
          else if(i>=1&&c[i]==' '){
                  if(c[i-1]!=' '){
                     printf(" ");
                      }
               }
            
          } 
    
    // scanf("%d",&i);
      return 0;
      }
