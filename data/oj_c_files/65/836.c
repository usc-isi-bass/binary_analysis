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
    int k,i=0,j=0,a,b,n;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        scanf("%d %d",&a,&b);
        if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))i++;
        if((a==1&&b==0)||(a==2&&b==1)||(a==0&&b==2))j++;
    }
    //printf("%d %d",i,j);
    if(i>j)printf("A");
    else if(j>i)printf("B");
    else if(i==j)printf("Tie");
    return 0;
}

