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

int f(int n){
    int result;
    if(n==1||n==2) return 1;
    else{
        result=f(n-1)+f(n-2);
        return result;
        } 
    }
int main(){
    int n,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("%d\n",f(n));
        }
    
    
    
    scanf("%d",&n);
    return 0;
    }
