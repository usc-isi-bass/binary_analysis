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
  int i,j,x[100],n,m;
  void px(int n,int array[100]);
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    scanf("%d",&x[i]);
  for(i=1;i<=m;i++)
    px(n-1,x);
  printf("%d",x[0]);
  for(i=1;i<n;i++)
   printf(" %d",x[i]);
  
  return 0;
}

void px(int n,int array[100])
{
 int t,i;
 t=array[n];
 for(i=n-1;i>=0;i--)
   array[i+1]=array[i];
 array[0]=t;
}