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
    int m;
    scanf("%d",&m);
    int n;
    int a=0,b=0;
    for(int i=3;i<=m/2;i=i+2){
            n=m-i;
            for(int j=3;j<=i;j++){
                    if(i%j==0){
                             a++; }}
            for(int k=3;k<=n;k++){
                    if(n%k==0){
                             b++; }}
            if(a==1&&b==1){
                           printf("%d %d\n",i,n);
                           } 
            a=0;
            b=0;
                            
    }
            
    int y;
    scanf("%d",&y);
    return 0;}
