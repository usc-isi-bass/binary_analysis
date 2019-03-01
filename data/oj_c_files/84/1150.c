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
    int n,i,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
                      scanf ("%d",&c);
                      if(i==1){
                               a=c;
                               }
                      if(i==2){
                               if(a>c){
                                       b=c;
                                       }else{
                                             b=a;
                                             a=c;
                                             }
                                             }         
                      if(i>2){
                               if(c>a){
                                       b=a;
                                       a=c;
                                       }
                               if((a>c)&&(c>b)){
                                                b=c;
                                                }
                                                }
                                                }        
    printf("%d\n%d\n",a,b);
    return 0;
}           