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

int yinshu(int num,int min);
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     int a,result;
                     scanf("%d",&a);
                     result=yinshu(a,2)+1; 
                     printf("%d\n",result);
                     }
    return 0;
}

int yinshu(int num,int min){
    int r,x=0;
    if(num<min){
                return 0;
                }
    else{
         for(r=min;r*r<=num;r++){
                         if(num%r==0){
                                      x=x+1+yinshu(num/r,r);
                                      }                         
                         }
    return x;
}}