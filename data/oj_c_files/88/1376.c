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

int main(void) 
{ 
    int ch, num = 0, flag = 0, count = 0; 
     
    while(ch = getchar()) 
    { 
              if(!isdigit(ch) && flag) 
              { 
                      printf("%d\n", num); 
                      count++; 
                      num = flag = 0; 
              } 
              if(isdigit(ch)) 
              { 
                    num  = 10 * num + ch - '0'; 
                    flag = 1; 
                    continue; 
              } 
              if(ch == '\n')break; 
                  
    }             
    
    return 0;    
}