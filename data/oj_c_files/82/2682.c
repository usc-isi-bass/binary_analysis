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

int main (){
    int n,a,b,k=0,i=0;
    scanf("%d",&n);
    while(n--){
               scanf("%d%d",&a,&b);
               if(a<=140&&a>=90&&b<=90&&b>=60){
               i++;
               if(k>i){k=k;}
               if(k<=i){k=i;}
               }
               else{
                    i=0;}
                    }
       printf("%d",k);
 
       return 0;
       }
                    
              