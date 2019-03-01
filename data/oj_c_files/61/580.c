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
    int n,i,a,tuzhi[25];
    scanf("%d",&n);
    tuzhi[0]=1;
    tuzhi[1]=1;
    for(i=2;i<25;i++){
           tuzhi[i]=tuzhi[i-1]+tuzhi[i-2]; 
    }          
    for(i=0;i<n;i++){
           scanf("%d",&a);
           printf("%d\n",tuzhi[a-1]);
    }
    scanf("%d",&n);
    return 0;
}        
