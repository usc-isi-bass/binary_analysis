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
    int sz[100];
    int n,i,e;
    scanf("%d",&n);
    for(i=0;i<n;i=i+1){
                       scanf("%d ",&sz[i]);
                       }
    for(i=0;i<n/2;i=i+1){
                       e=sz[i];
                       sz[i]=sz[n-1-i];
                       sz[n-1-i]=e;
                       }
    for(i=0;i<n;i=i+1){
                       if(i<n-1) printf("%d ",sz[i]);
                       else printf("%d",sz[i]);
                       }
    
    return 0;
}