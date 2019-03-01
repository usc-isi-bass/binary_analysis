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
    int n,m,k,r,i;
    scanf("%d%d",&n,&k);
    for(r=1;r<1000000;r++){
        m=r*(n-1);
        for(i=1;i<=n;i++){
            if(m%(n-1)==0){
                m=m*n/(n-1)+k;
            }
            else{
                break;
            }
            if(i==n){
                goto end;
            }
        }
    }
  end:
    printf("%d",m);
    return 0;
}