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

int main()
{
    int sz[1000];
    int n,k;
    int i,j;
    int sum,a=0;
    scanf("%d%d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(j=0;j<n;j++){
        if(a==1){
            break;
        }else{
        for(i=0;i<n;i++){
            sum=sz[j]+sz[i];
            if((sum==k)&&(i!=j)){
                a=1;
                break;
            }else{
                continue;
            }
         }
        }
    }
    if(a==1){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
    
}
