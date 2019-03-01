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


int factor(int a,int min){
    int i,result=1;
    if(a<min) return 0;
    for(i=min;i<a;i++){
                       if(a%i==0)
                       result+=factor(a/i,i);
                       }
    return result; 
} 

int main(){
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);
                     a[i]=factor(a[i],2);
                     }
    for(i=0;i<n;i++){
                     if(i==n-1) printf("%d",a[i]);
                     else printf("%d\n",a[i]);
                     }
    return 0;
} 