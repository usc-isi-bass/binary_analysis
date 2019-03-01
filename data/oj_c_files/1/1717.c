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

int f(int n,int k){
   if(n<k)return 0;
   int i,s=1;
   for(i=k;i<n;i++){
     if(n%i==0)s+=f(n/i,i);
     }
   return s;
}
int main(){
    int m,n,i,ans,s;
    scanf("%d",&m);
    while(m--){
       scanf("%d",&n);
       printf("%d\n",f(n,2)); 
       }
    return 0;
}