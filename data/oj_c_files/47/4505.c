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
    int u[200],i,n,a[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    if(i==n-1){
               scanf("%d",&(u[i]));
               break;
               }
    scanf("%d ",&(u[i]));  
}
for(i=0;i<n;i++){
a[n-1-i]=u[i];
}
for(i=0;i<n;i++){
       if(i==n-1){
               printf("%d",a[i]);
               break;
               }
    printf("%d ",a[i]);  
} 

return 0;
}          
