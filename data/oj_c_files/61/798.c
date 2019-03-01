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

int f(int n)
{
  if(n==1||n==2)
  return 1;
  else
  return f(n-1)+f(n-2);  
}
main()
{
 int m,i=1;
 scanf("%d",&m);
 int a[10000];
 for(i=1;i<=m;i++)
 scanf("%d",&a[i]);
 for(i=1;i<=m;i++)
  printf("%ld\n",f(a[i]));
  getchar();
  getchar();      
}
