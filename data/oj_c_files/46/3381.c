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
    int r,c,i,k,j,p;
    scanf("%d %d",&r,&c);
    int a[1000][1000];
    for(i=0;i<r;i++){
        for(k=0;k<c;k++){
            scanf("%d",&a[i][k]);
        }
    }
    int s=0;
    int h=0;
    i=0;
    j=0;
    p=r*c;
    while(j<p){
     for(i=s,k=h;k<c;k++){
         if(j<p){
         printf("%d\n",a[i][k]);
         j++;
         }
     }
     s++;
     for(i=s,k=c-1;i<r;i++){
         if(j<p){
         printf("%d\n",a[i][k]);
         j++;
         }
     }
     c--;
     for(k=c-1,i=r-1;k>=h;k--){
         if(j<p){
         printf("%d\n",a[i][k]);
         j++;
         }
     }
     r--;
     for(i=r-1,k=h;i>=s;i--){
         if(j<p){
             printf("%d\n",a[i][k]);
             j++;
         }
     }
     h++;
     }
    return 0;
}



