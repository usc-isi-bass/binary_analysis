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
  int num[21];
  if (a==1) num[1]=1;
  if (a==2) num[2]=1;
  if (a>2) num[a]=f(a-1)+f(a-2);      
  return (num[a]);   
}
main()
{
  int i,n,a,r; 
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    scanf("%d",&a);
    r=f(a);
    printf("%d\n",r);
  }   
}
