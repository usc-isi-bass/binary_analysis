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
    int n,sz[300],i,e,j,k=0,r[300];
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&sz[i]);
       }
    for(i=0;i<n;i++){
       for(j=0;j<i;j++){
          if(sz[i]==sz[j]){
            sz[i]=0;
            }
            }
            }
    for(i=0;i<n;i++){
       if(sz[i]!=0){
         r[k]=sz[i];
         k++;
         }
         }
    for(i=0;i<k-1;i++){
       printf("%d,",r[i]);
       }
    printf("%d",r[k-1]);
    int t;
    scanf("%d",&t);
    return 0;
}

