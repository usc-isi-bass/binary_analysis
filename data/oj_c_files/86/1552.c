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
    int n,m,a,b,zongshu[1000];
    scanf("%d",&n);
    for(a=0;a<n;a++){
        scanf("%d",&m);
        if(m==0){
            printf("60\n");
            continue;
        }
        for(b=1;b<=m;b++){
            scanf("%d",&zongshu[b]);
        }
        for(int k=m;k>=0;k--){
            if((zongshu[k]+3*k)<=60){
                printf("%d\n",60-3*k);
                break;
            }
            else if((zongshu[k]+3*k-3)<=60){
                printf("%d\n",zongshu[k]);
                break;
            }
            else continue;
        }
    }
    return 0;

          }