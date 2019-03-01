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

int n,m,a[101];
void toscan()
{
  int i;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}

void yidong(int n,int m,int a[])
{
  int t,i,j;
  for(i=0;i<m;i++)
   { for(j=n;j>0;j--)
        a[j]=a[j-1];
     a[0]=a[n];
   }
}

void toprint()
{ int i;
  printf("%d",a[0]);
  for(i=1;i<n;i++)
    printf(" %d",a[i]);
}
main()
{
  toscan();
  yidong(n,m,a);
  toprint();
  return 0;
}
