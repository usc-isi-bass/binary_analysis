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
   int n,i,k,a[100000],f[100000]={1,1};
   scanf("%d",&n);
   for(k=0;k<n;k++){
        scanf("%d",&a[k]);
        for(i=2;i<=a[k];i++){
           f[i]=f[i-2]+f[i-1];
           }
           printf("%d\n",f[a[k]-1]);
        }
    scanf("%d",&n);
    return 0;
    }
