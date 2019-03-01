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


int N[MAX];

int x_iter(int x){
  if(N[x-1]==1) return x;
  else{
    N[x-1]=1;
    x_iter(x/2);
  }
}

int main(){
  int x,y;
  cin>>x>>y;
  memset(N,0,sizeof(N));
  x_iter(x);
  cout<<x_iter(y);
  return 0;
}