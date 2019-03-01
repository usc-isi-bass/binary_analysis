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

void main(){
    int i;
    int m,mm,n,k;
    scanf("%d%d",&n,&k);
    mm=0;
    while(1){
        mm+=n-1;
        m=mm;
        for(i=0;i<n&&m%(n-1)==0;i++)
                m=m/(n-1)*n+k;
        if(i>=n){
            printf("%d\n",m);
            break;
        }
    }
}    