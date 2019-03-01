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
int k,i,e,n,sz[100];
scanf("%d",&n);
   for(i=0;i<n;i++){ 
            scanf("%d",&sz[i]);
            }


    printf("%d ",sz[n-1]);
    for(i=n-2;i>=1;i--){
         printf("%d ",sz[i]);
    }
    printf("%d",sz[0]);


return 0;
}
