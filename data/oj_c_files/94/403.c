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
    int N,s;
    scanf("%d",&N);
    int a[N],b[N];
    for(int i=0;i<N;i++){
     scanf("%d ",&a[i]);
     }
    for(int i=0;i<N;i++){
     if(a[i]%2!=0){
      b[i]=a[i];
      }else{
      b[i]=0;
      }
    }
    for(int j=1;j<N;j++){
    for(int i=0;i<N-j;i++){
      if(b[i]>b[i+1]){
       s=b[i+1];
       b[i+1]=b[i];
       b[i]=s;
       }
      }
    }
     for(int i=0;i<N-1;i++){
      if(b[i]!=0){
      printf("%d,",b[i]);
       }
      }
     printf("%d",b[N-1]);
     return 0;
}
      