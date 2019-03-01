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

int f(int a)
{
    if(a==1||a==2)
    return 1;
    else
    return (f(a-1)+f(a-2));
}
int main()
{
  int n,i,k;
  scanf("%d",&n);
  int a[n],b[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    b[i]=f(a[i]);
    printf("%d\n",b[i]);
  }
  getchar();
  getchar();
}