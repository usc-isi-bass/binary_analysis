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


int f(int m,int n)
{
  if(n==1) return 1;
  if(n>m)        return(f(m,m));
  if(n==m)       return(f(m,m-1)+1);
  if(n<m)        return (f(m,n-1)+f(m-n,n));
  
}

int main()
{
 int f(int m,int n);
 int i,n,M,N;
 scanf("%d",&n); 
 for(i=1;i<=n;i++)
{
  scanf("%d %d",&M,&N);
  f(M,N);
  printf("%d\n",f(M,N));
}

}