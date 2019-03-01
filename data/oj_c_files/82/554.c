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
    int n,P,p,x,i,M,m;
    M=0;
    x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&P,&p);
        if(P>=90&&P<=140&&p>=60&&p<=90){
                   x=x+1;    m=x;                 }                  
        else{      
                   m=x;
                   x=0;}
        if(m>M){M=m;      }
}
    printf("%d",M);   
    return 0;
    }
