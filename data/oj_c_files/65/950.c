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
    int n,a,b,i;
    a=b=i=0;
    int sz[2];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&sz[0],&sz[1]);
        if(sz[0]==0&&sz[1]==1){a++;}else if
        (sz[0]==0&&sz[1]==2){b++;}else if
        (sz[0]==1&&sz[1]==0){b++;}else if
        (sz[0]==1&&sz[1]==2){a++;}else if
        (sz[0]==2&&sz[1]==0){a++;}else if
        (sz[0]==2&&sz[1]==1){b++;}
    }
    if(a>b){printf("A");}
    if(a==b){printf("Tie");}
    if(a<b){printf("B");}
    return 0;
    
}
