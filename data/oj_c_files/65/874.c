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
    int n,a ,b,s;
    s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(b-a==1||a-b==2){
            s=s+1;
        }else if(a==b){
            s=s+0;
        }else{
            s=s-1;
        }
    }
    if(s>0){
        printf("A");
    }else if(s==0){
        printf("Tie");
    }else{
        printf("B");
    }
    return 0;
}
