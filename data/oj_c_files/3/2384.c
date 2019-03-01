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
    int n,k,a,b,i,j,s;
    int sz[2000];
    scanf("%d %d",&n,&k);
    s=0;
    for(i=0;i<n;i++){
                     scanf("%d",&sz[i]);}
    for(i=0;i<n;i++){
                     for(j=i+1;j<n;j++){a=sz[i];
                                        b=sz[j];
                                        if(a+b==k){s++;}}}
    if(s!=0){printf("yes");}
    else{printf("no");}
    return 0;
}