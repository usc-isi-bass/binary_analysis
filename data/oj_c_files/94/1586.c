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
    int n,i,k,e,c;
    int a[LEN],d[LEN];
    c=0;
    scanf("%d",&n);
    for (i=0;i<n;i++){
       scanf("%d",&a[i]);
}
    for(k=1;k<n-1;k++){
    for(i=0;i<n-k;i++){
       if (a[i]>a[i+1]){
       e=a[i];
       a[i]=a[i+1];
       a[i+1]=e;
       };
    };
    }
    for (i=0;i<n;i++){
        if(a[i]%2==1){
d[c]=a[i];c=c+1;
       }
}
for (i=0;i<c;i++){
    if(i!=c-1){
printf("%d,",d[i]);
}
else{
 printf("%d",d[i]);
}
}
return 0;
}
