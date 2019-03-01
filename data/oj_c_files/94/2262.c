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

int main() {
    int n,i,k,m,x,p;
    scanf("%d",&n);
    int a[n];
    k=0;
    for(i=1;i<=n;i++) {
        scanf("%d",&m);
        if(m%2==1) {
            k++; a[k]=m; 
        }
    }
  for(p=0;p<k;p++) {
      for(i=1;i<=k-p;i++) {
          if(a[i]<a[i+1]) {
              x=a[i+1];
              a[i+1]=a[i];
              a[i]=x;
          }
      }
  }
  for(i=1;i<k;i++) {
      printf("%d,",a[k-i+1]) ;
  }
  printf("%d",a[1]) ;
  return 0 ;
  
  
  
}

