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
    int n,i,j,k;
    int zong[100],you[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&zong[i],&you[i]);
        if(i>=1){
            if(you[i]*1.0/zong[i]-you[0]*1.0/zong[0]>0.05){
                printf("better\n");
            }else if(you[0]*1.0/zong[0]-you[i]*1.0/zong[i]>0.05){
                printf("worse\n");
            }else {
                printf("same\n");
            }
        }
    }
    
    return 0;
}