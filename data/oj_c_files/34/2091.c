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
    int a,b;
    scanf("%d",&a);
    if(a==1){
             printf("End");
             }
    else{
    for(int i=1;;i++){
            if(a%2==0){
                       b=a/2;
                       printf("%d/2=%d\n",a,b);
                       a=b;}
            else{
                 b=a*3+1;
                 printf("%d*3+1=%d\n",a,b);
                 a=b;
                 }
            if(a==1){
                     printf("End");
                     break;}}}
     int y;
    scanf("%d",&y);
    return 0;}