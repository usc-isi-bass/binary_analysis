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
    int a[300];
    int n ,m ,d ,e ,f , i;//n m ?????? ?d???????
    
    e = 0;
    for(i = 0;i <= 299;i++){
        a[i] = 1;
    }
    do{
        
        
        scanf("%d %d",&n,&m);
        d = n;
        e = 0;
        for(i = 0;i <= 299;i++){
            a[i] = 1;
        }
        
        if(n != 0 || m != 0){//?????? d????
            
            for(i = 0;i <= (n - 1);i++){
                e = a[i] + e;
                if(e == m){
                    a[i] = 0;
                    d = d - 1;
                    e = 0;
                }
                if(i == n-1){
                    i = -1;
                    
                }
                if(d == 1)break;
                
            }//?????????
            for(f = 0;f <= n-1;f++){
                if(a[f] == 1)printf("%d\n",f+1);
                
            }
            }
    }
        
        
    
    while(n != 0||m != 0);
    return 0;    
}
