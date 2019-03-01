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
    int sz[1000],m,n,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
    scanf("%d",&sz[i]);
    }
    m%=n;
    for(j=0;j<m;j++){
       for(i=n-1;i>=0;i--){
         sz[i+1]=sz[i];
        }
       sz[0]=sz[n];
    }
    printf("%d",sz[0]);
    for(i=1;i<n;i++){
    printf(" %d",sz[i]);
    }
    return 0;
}