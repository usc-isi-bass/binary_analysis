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


int a[25],num;
int b[25];
int i,j,k;

int main(){
  cin>>num;
  for(i=0;i<num;i++){
    cin>>a[i];
    b[i]=1;
  }
  int max =0;
  b[0]=1;
  for(i=1;i<num;i++){
     for(j=i-1;j>=0;j--){
       if(a[j]>=a[i]){
          k = b[j]+1;
          if(k>b[i]){
            b[i] = k;
            if(k>max){
               max =k;
            }
          }
       }
     }
  }
  cout<<max<<endl;
  return 0;
}
