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

int main()
{
  int m,n,i,j,flag=1;
  cin>>m>>n;
  for(i=m;i>0&&flag;i/=2)
   for(j=n;j>0&&flag;j/=2)
    if(i==j)
     {cout<<i;flag=0;}//???????????????????????
  return 0;
}

