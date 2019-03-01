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

int f(int m,int n){
    int count;    
    if(m==1||n==1) return 1;
    if(m<n)        count=f(m,n-1);
    else           count=f(m-n,n)+f(m,n-1);            
    return         count; 
    }

int main(){
    int t,m,n,i,count;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&m,&n);
        count=f(m,n);
        printf("%d\n",count);
        }    
    
    scanf("%d",&n);
    return 0;
    }
