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
    int n,f[60],i,s,t,m,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int g[200]={0};
        scanf("%d",&m);
        for(t=1,k=0;t<m+1;t++){
            scanf("%d",&f[t]);
            k=k+f[t]-f[t-1];
            g[k+1]=1;g[k+2]=1;g[k+3]=1;
            k=k+3;
        }
        for(t=1,s=60;t<61;t++){
            if(g[t]==1){s--;}
        }
        printf("%d\n",s);
    }
    return 0;
}
