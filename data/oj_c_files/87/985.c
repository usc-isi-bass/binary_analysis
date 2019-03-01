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
   
    int a,b,c,d,e,f;
    while(1){
        scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
        if(a+b+c+d+e+f == 0){
           break;
        }
        d += 12;
        int ans = 0;
        if(f < c){
             e -- ;
             ans += (60 + f - c);
        }
        else{
             ans += (f - c);
        }
        
        if(e < b){
             d --;
             ans += (60 + e - b)*60;
        }
        else{
             ans += (e - b)*60;
        }
        
        ans += (d - a)*3600;
        printf("%d\n", ans);
    }
    
} 
