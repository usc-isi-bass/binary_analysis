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
    int j,i,n,m,b,k,start,delenum;
    while(1){
    scanf("%d %d",&n,&m);
    if(m==0&&n==0){
        break;
    }
    b=n;
    for(i=0;i<b;i++){
        a[i]=i+1;
    }
    start=0;
    for(k=1;k<b;k++){
        delenum=(start-1+m)%n;
        for(j=delenum;j<n-1;j++){
            a[j]=a[j+1];
        }
            start=delenum;
            n--;
    }
    printf("%d\n",a[0]);
}
return 0;
}
