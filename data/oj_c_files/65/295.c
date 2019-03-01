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
    int n,x,y,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if((x==0&&y==1)|(x==1&&y==2)|(x==2&&y==0)){
            s++;
        }else if(x==y){
        }else{
            s--;
        }
    }
    if(s==0){
        printf("Tie");
    }
    if(s>0){
        printf("A");
    }
    if(s<0){
        printf("B");
    }
    return 0;
}