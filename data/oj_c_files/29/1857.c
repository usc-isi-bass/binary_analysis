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

float b[100];
int he(int n,int m)
{
 int i,k;
 int f1=1,f2=2;
  b[m]=0.0;
 for(i=1;i<=n;i++)
 {
  b[m]=b[m]+f2*1.0/f1;
  k=f1;
  f1=f2;
  f2=k+f2;
 }
 return 0;
}

int main(int argc, char* argv[])
{
  int m,a[100],i;
  int he(int x,int i);
  scanf("%d\n",&m);
  for(i=1;i<=m;i++)
  {
	  scanf("%d\n",&a[i]);
      he(a[i],i);
  }
  for(i=1;i<=m;i++)
	  printf("%.3f\n",b[i]);
	return 0;
}