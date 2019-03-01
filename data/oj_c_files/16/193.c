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
  int a[10];
  int n,i,j;
  scanf("%d",&n);
  if (n==0) {printf("0\n");return 0;}
  for(i=1;n>0;i++)
   {
    a[i]=n%10;
    n=n/10;
   }
   for(j=1;j<=i-1;j++)
   printf("%d",a[j]);
//   scanf("%d",&n);
   return 0;
}
  