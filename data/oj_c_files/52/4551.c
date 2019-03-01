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
  int *p;
  int a[100],n,m,i;
  scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++)   scanf("%d",&a[i]);
  p=&a[1+n-m];
  printf("%d",*p);
  p=&a[2+n-m];
  for(i=0;i<=m-2;i++)  
  printf(" %d",p[i]);
  p=&a[1]; 
  for(i=0;i<=n-m-1;i++) 
  printf(" %d",p[i]);
  return 0;
}