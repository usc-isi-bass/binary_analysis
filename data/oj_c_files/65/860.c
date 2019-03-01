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
    int n,a=0,b=0,x,y;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d\n",&x,&y);
        if(x-y==1||(x==0&&y==2)){
            b++;
        }
         if(y-x==1||(y==0&&x==2)){
            a++;
        }
    }
    if(a>b){
        printf("A");
    }
    else if(a<b){
        printf("B");
    }
    else{
        printf("Tie");
    }
    return 0;
}
