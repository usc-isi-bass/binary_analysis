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
  int n,i,j;
  scanf("%d",&n);
  int a[n];
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
  i=0;
  while (i<n)
  { for (j=i+1;j<n;j++)
   if (a[i]==a[j]) a[j]=0;
   i++;}
  printf("%d",a[0]);
  i=1;
  for (i=1;i<n;i++)
  if (a[i]!=0) printf(" %d",a[i]);
}