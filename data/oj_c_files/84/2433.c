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
    int n,a,b;
    scanf("%d",&n);
    int i,sz[300],j,m=0;
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(sz[j]>sz[i]){
               m++;
            }
        }
        if(m==0){
        a=sz[i];
        printf("%d\n",a);
        break;
        }
        m=0;
    }
  m=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            if(sz[j]>sz[i]){
               m++;
            }
           
        }
        if(m==1){
        b=sz[i];
        printf("%d\n",b);
        break;
        }
        m=0;
    }
    return 0;
}

    