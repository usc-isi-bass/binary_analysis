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
    int i,j,m,n,a,b,c,d;
    double x,y;
    int num[10000],ok[10000];
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    x=1.0*b/a;
    for(i=1;i<n;i++){
                     y=0;
                     scanf("%d %d",&c,&d);
                     y=1.0*d/c;
                     if((y-x)>0.05){
                                printf("better\n");
                                }
                     else if((x-y)>0.05){
                                printf("worse\n");
                                }
                     else{
                          printf("same\n");
                          }
                     
                     }
     return 0;
}
