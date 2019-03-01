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
    int n,i,result;
    result=0;
    scanf("%d\n",&n);
    int a[200][2];
    for(i=0;i<n;i++){
            scanf("%d%d",&a[i][0],&a[i][1]);
            if((a[i][0]==0&&a[i][1]==1)||(a[i][0]==1&&a[i][1]==2)||(a[i][0]==2&&a[i][1]==0)){
            result=result+1;
        }else if(a[i][0]==a[i][1]){
            result=result;
        }else if((a[i][0]==0&&a[i][1]==2)||(a[i][0]==1&&a[i][1]==0)||(a[i][0]==2&&a[i][1]==1))
            result=result-1;
    }
    if(result>0){
        printf("A");
    }else if(result<0){
        printf("B");
    }else if(result==0){
        printf("Tie");
    }
return 0;
}

