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

int main (){
    int n, a[202], b[202], i, j=0, k=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d %d", &a[i], &b[i]);
        if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){j++;}
        if(a[i]==b[i]){j++;k++;}
        if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)){k++;}
        }
    if(j>k){printf("A");}else{
    if(j<k){printf("B");}else{
    printf("Tie");}}
    return 0;
}
