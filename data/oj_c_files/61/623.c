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
    int n,i,j;
    scanf("%d",&n);
    int a[10000],b[10000];
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);
                     }
    for(i=0;i<n;i++){
                     for(j=0;j<a[i];j++){
                                         if(j==0 || j==1){
                                                 b[j]=1;
                                                 }
                                         else{
                                              b[j]=b[j-1]+b[j-2];
                                              }
                                         }
                     if(i!=n-1)
                        printf("%d\n",b[j-1]);
                     else
                        printf("%d",b[j-1]);
                     }
return 0;
}