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
    int n,i,m=0,o=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]-b[i]==1){
            o++;
        }else if(a[i]-b[i]==-1){
            m++;
        }else if(a[i]==0&&b[i]==2){
            o++;
        }else if(a[i]==2&&b[i]==0){
            m++;
        }
    }
    if(m>o){
        printf("A");
    }else if(m<o){
        printf("B");
    }else{
        printf("Tie");
    }
    return 0;
}
