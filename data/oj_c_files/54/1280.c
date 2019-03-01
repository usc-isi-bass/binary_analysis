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

//#include<stdio.h>
//#include<time.h>


int div_foo(int n,int k,int index,int m);

int main(){
  int n,k;
  cin>>n>>k;
  cout<<div_foo(n,k,1,1)<<endl;
  //printf("%.21f",(double) clock()/CLOCKS_PER_SEC);
  return 0;
}

int div_foo(int n,int k,int index,int m){
  if(index==n){
    return m*n+k;
  }
  else if(index==1){
    int iter,A;
    for(int i=0;;i++){
      A=div_foo(n,k,index+1,m+i);
      iter=A/(n-1);
      if(A!=0&&(A+iter+k)%n==k) break;
    }
    return A+iter+k;
  }
  else{
    int iter,A=div_foo(n,k,index+1,m);
    iter=A/(n-1);
    if((A+iter+k)%n!=k||A==0) return 0;
    else return A+iter+k;
  }
}
