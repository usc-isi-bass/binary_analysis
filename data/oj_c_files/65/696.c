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
    int as=0,bs=0,n,a[200],b[200],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
       if(a[i]==b[i]){as++;bs++;}
       else{if(a[i]==1&&b[i]==0){bs++;}
       else{if(a[i]==1&&b[i]==2){as++;}
       else{if(a[i]==0&&b[i]==1){as++;}
       else{if(a[i]==0&&b[i]==2){bs++;}
       else{if(a[i]==2&&b[i]==0){as++;}
       else{if(a[i]==2&&b[i]==1){bs++;}}}}}}}
    }
    if(as==bs){printf("Tie");}
    else{if(as>bs){printf("A");}
    else{printf("B");}}
    return 0;
    }
