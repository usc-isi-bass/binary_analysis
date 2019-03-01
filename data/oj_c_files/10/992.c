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
    int n;
    int d[25], f[25];
    scanf("%d", &n);
    for (int i=0;i<n;i++)
        scanf("%d", &d[i]);
    for (int i=0;i<n;i++){
        f[i]=1;
        for (int j=0;j<i;j++)
            if (d[j]>=d[i] && f[i]<f[j]+1) f[i]=f[j]+1;
    }
    int ans=-1;
    for (int i=0;i<n;i++)
        if (ans<f[i]) ans=f[i];
    printf("%d\n",ans);
    return 0;
}