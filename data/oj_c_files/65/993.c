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
    int n,a,b,i,sz[300],s,num;
    s=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
                     scanf("%d %d\n",&a,&b);
                     if(a==b){
                              num=0;}
                     if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
                                                                  num=1;}
                     
                     if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
                                                                  num=-1;}
                     s=s+num;}
    if(s==0){
             printf("Tie");}
    if(s>0){
            printf("A");}
    if(s<0){
            printf("B");}
    return 0;
} 