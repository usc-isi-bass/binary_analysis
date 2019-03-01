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

int f(int x)
{
    int a[1000]={1,1};
    for(int i=2;i<x;i++)
    a[i]=a[i-1]+a[i-2];
    return a[x-1];
}
int main()
{
  int n;
  scanf("%d",&n);
  int b[1000];
  for(int i=0;i<n;i++)
  scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
  printf("%d\n",f(b[i]));
  getchar();
  getchar();
} 