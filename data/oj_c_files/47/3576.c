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

int n,inp[MAX],oup[MAX],i;
int main(){
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&inp[i]);
    }
    for(i=0;i<=n-1;i++){
        oup[i]=inp[n-1-i];
    }
    for(i=0;i<n-1;i++){
        printf("%d ",oup[i]);
    }
    printf("%d",oup[n-1]);
    return 0;
}
