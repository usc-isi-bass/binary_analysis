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
    int sz[max],a[max];
    int n,i,k;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        scanf("%d ",&(sz[i]));
    }
    for(k=1;k<n;k++){
        a[k]=sz[n-k+1];
        printf("%d ",a[k]);
    }
    a[n]=sz[1];
    printf("%d",a[n]);
    return 0;
}
