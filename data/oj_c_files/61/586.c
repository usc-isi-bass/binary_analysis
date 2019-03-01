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


int F(int a){
    int result;
    if(a==1||a==2)
        return 1;
    else{
        result=F(a-1)+F(a-2);
        return result;     
    }    
}

int main(){
    int n,in[21],out[21],i,q;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&in[i]);
        out[i]=F(in[i]);                 
    }
    
    for(i=0;i<n;i++)
        printf("%d\n",out[i]);
    
    scanf("%d\n",&q);
    return 0;
}
