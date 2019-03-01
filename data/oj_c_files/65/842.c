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
    int a[1000],b[1000],i,n,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
        if(a[i]==b[i]){
        }
        else if(a[i]==0){
            if(b[i]==1){
                x++;
            }
            else if(b[i]==2){
                x--;
            }
        }
        else if(a[i]==1){
            if(b[i]==2){
                x++;
            }
            if(b[i]==0){
                x--;
            }
        }
        else if(a[i]==2){
            if(b[i]==0){
                x++;
            }
            if(b[i]==1){
                x--;
            }
        }
    }
    if(x>0){
        printf("A");
    }
    else if(x<0){
        printf("B");
    }
    else{printf("Tie");}

}
