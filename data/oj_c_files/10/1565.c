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
    int n,i,i1,k,imax=0;
    int a[26];
    int b[26];
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    b[n]=0;
    b[n-1]=1;
    
    for (i=n-2; i>=0; i--) {
        imax=n;
        for (i1=i+1; i1<n; i1++) {
            if (b[i1]>b[imax]&&a[i]>=a[i1]) {
                imax=i1;
            }
        }
        b[i]=b[imax]+1;
    }
    
    for (i=0,k=0; i<n; i++) {
        if (b[i]>k) {
            k=b[i];
        }
    }
    printf("%d",k);
    return 0;
}
