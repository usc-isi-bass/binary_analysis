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

int kk(int m,int n){
    if(m==0)
    return 1;
    else {
    if(n==1)
    return 1;
    else {
   if(m<n)
   return kk(m,m);
   if(m>=n)
   return kk(m,n-1)+kk(m-n,n);
      }
      }
      }
int main(){
    int m,n,t;
    cin>>t;
    int i,aa[t+1];
    for(i=1;i<=t;i++){
     cin>>m>>n;
     aa[i]=kk(m,n);
     }
    for(i=1;i<=t;i++)
    cout<<aa[i]<<endl;
    
    return 0;
}
    
    
