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


int main()
{
    int i,j,t,a[16]={0},sum=0,k=0;
    while(scanf("%d",&a[0]) && a[0]!=-1){
    for(i=1;i<=16;i++){
        scanf("%d",&a[i]);
        if(a[i]!=0) sum++;
        else break;
    }
    for(i=0;i<=sum;i++){
        for(j=i+1;j<=sum;j++){
            if(a[i]==2*a[j] || a[j]==a[i]*2) k++;
        }
    }
    printf("%d\n",k);
    sum=0;
    k=0;
    }
    return 0;
}