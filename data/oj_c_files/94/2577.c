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
    int n,s,t,m,j,r,i;
    int a[500],b[500];
    s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2!=0){
            b[s]=a[i];
            s++;
        }
    }
    for(j=1;j<s;j++){
        t=b[j];
        for(r=j-1;r>=0;r--){
            if(t<b[r]){
                b[r+1]=b[r];
                b[r]=t;
            }else{
                b[r+1]=t;
                break;
            }
        }
    }
    for(m=0;m<s-1;m++){
        printf("%d,",b[m]);
    }
    printf("%d",b[s-1]);
    return 0;
}

