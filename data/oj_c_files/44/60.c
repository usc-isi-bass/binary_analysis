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

int main(void)
{
    int i,n,flag,n1;
    int f(int n);

    for(i=1;i<=6;i++){
    scanf("%d",&n);
    if (n>0) flag=1;
    else {flag=-1;n=-n;}
    n1=f(n);
    printf("%d\n",flag*n1);
    }
}
int f(int n)
{
  int s,nn;

  s=n;nn=0;
  while(s>0){
    nn=nn*10+s%10;
    s=s/10;
  }

  return nn;
}
