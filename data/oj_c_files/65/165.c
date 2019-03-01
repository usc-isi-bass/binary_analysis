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
     int n,c=0,d=0,a,b,e=0;
     scanf("%d",&n);
     for(int i=0;i<n;i++){
         scanf("%d%d",&a,&b);
        if(a-b==-1){
            c++;
        }
        else if(a-b==2){
            c++;
        }
        else if(a-b==1){
            d++;
        }
        else if(a-b==-2){
            d++;
        }
         }
     if(c>d){
         printf("A");
     }
     else if(c<d){
         printf("B");
     }
     else {printf("Tie");}
     return 0;
 }
 
