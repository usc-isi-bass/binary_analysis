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
    int m,n,k,j,l,a,i;
    cin>>k;
    int aa[k+1];
    for(i=1;i<=k;i++){
      aa[i]=0;
       cin>>m>>n;
       for(j=1;j<=m;j++){
         for(l=1;l<=n;l++){
           cin>>a;
           if(j==1||j==m||l==1||l==n)
                 aa[i]=aa[i]+a;
                 }
                 }
                 }
         for(i=1;i<=k;i++)
         cout<<aa[i]<<endl;
              return 0;
         }