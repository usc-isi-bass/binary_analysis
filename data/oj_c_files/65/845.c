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
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    int j=0;
    for(i=0;i<n;i++){
        if(a[i]==b[i]){
            j=j;
        }else if(b[i]-a[i]==1||a[i]-b[i]==2){
            j++;
        }else if(a[i]-b[i]==1||b[i]-a[i]==2){
            j--;
        }
    }
    if(j>0){
        printf("A");
    }else if(j==0){
        printf("Tie");
    }else if(j<0){
        printf("B");
    }
    return 0;
}
