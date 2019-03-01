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
    int n;
    scanf("%d",&n);
    int a[n];
    int i,k,e,max;
    for(i=0;i<n;i++){
        scanf("%d",&(a[i]));
        
    }
    for(k=1;k<=n;k++){
        max=0;
        for(i=0;i<=n-k;i++){
            if(a[i]>a[max]){
                max=i;
            }
        }
        if(max!=n-k){
            e=a[max];
            a[max]=a[n-k];
            a[n-k]=e;
            
        }
        
    }
    for(i=0;i<n;i++){
        if((a[i])%2==1){
            if(i==n-2||i==n-1){
            printf("%d",a[i]);
        }else {
            printf("%d,",a[i]);
        }
    }
}
return 0;
}
