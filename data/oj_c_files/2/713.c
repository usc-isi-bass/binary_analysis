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

struct book{
       int  num;
       char writer[28];
}bo[1000];
int main()
{
    int i,j,k,n,a,b;
    int max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d %s",&bo[i].num,bo[i].writer);
       }
    for(i='Z';i>='A';i--){
        a=0;
        for(k=0;k<n;k++){
            for(j=0;j<27;j++){
                if(bo[k].writer[j]==i){
                   a++;
                  }
               }
           }
        if(a>max){
           max=a;
           b=i;
          }
       }
     printf("%c\n%d\n",b,max);
     for(j=0;j<n;j++){
         for(i=0;i<28;i++){
             if(bo[j].writer[i]==b){
                printf("%d\n",bo[j].num);
               }
            }
        }
     return 0;
}