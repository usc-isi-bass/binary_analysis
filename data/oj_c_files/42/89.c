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


main(){
       int a[100000];
       int i,j,n,k,sum;
       scanf("%d",&n);
       sum=n;
       for(i=0;i<n;i++){
           scanf("%d",&a[i]);
       }
       scanf("%d",&k);
       for(i=0;i<sum;i++){
           if(a[i]==k){
               sum=sum-1;
               for(j=i;j<sum;j++){
                   a[j]=a[j+1];
               }
           i=i-1;
           }
       }
       for(i=0;i<sum-1;i++){
           printf("%d ",a[i]);
       }
       printf("%d",a[sum-1]);
}
