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
    int k;
    if(n==1||n==2) k=1;
    else{
        k=f(n-2)+f(n-1);
        }
    return k;
    }
int main(){
    int t,n,i,j;
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&n);
        i=f(n);
        printf("%d\n",i);
        }
    
    
    scanf("%d",&i);
    return 0;
    }
