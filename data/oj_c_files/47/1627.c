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
int n,k;
int i;
int sz[100];
scanf("%d",&n);
i=0;
k=n-1;
while(i<n){
scanf("%d",&sz[i]);
i++;
}
while(k>=0){
    if(k!=0){
    printf("%d ",sz[k]);}
    else{printf("%d",sz[k]);}
    k--;
}
return 0;
}
