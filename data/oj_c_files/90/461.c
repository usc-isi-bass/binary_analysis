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

int fkong(int m,int n)
{
  int f(int x,int y);
  if(n==1)
    return 0;
  else
    return f(m,n-1);
}
int ffei(int m,int n)
{
  int f(int a,int b);
  if(n==1||m==n)
    return 1;
  else if(m<n)
    return 0;
  else
  return f(m-n,n);
}
int f(int m,int n)
{
  if(n==1||m==1)
    return 1;
  else
    return fkong(m,n)+ffei(m,n);
}
int main()
{
  int m[22],n[22],i,t;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d%d",&m[i],&n[i]);
      printf("%d\n",f(m[i],n[i]));
  }
}




