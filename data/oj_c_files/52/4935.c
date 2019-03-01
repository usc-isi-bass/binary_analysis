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
{ int i,j,k,l,n,m,a[10000]={0};
  scanf("%d %d",&n,&m);
  for (i=m+1;i<=n;i++)
	  scanf("%d",&a[i]);
  for (i=1;i<=m;i++)
      scanf("%d",&a[i]);
  printf("%d",a[1]);
  for (i=2;i<=n;i++)
	  printf(" %d",a[i]);
  return 7;
}