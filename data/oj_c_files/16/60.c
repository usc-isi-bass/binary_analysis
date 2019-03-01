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

int main () {
     
    int in,k,m,sum=0;                    //m??????????321?????????1 
    scanf("%d",&in);
    if (in==100) printf("001");
    else {k=in; 
         for(;k>0;){
            m=k%10;
            k=k/10;
            sum=sum*10+m;
            }
         printf("%d",sum);}        
         return 0;
               }
            
        
        
        
