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
  int n,m,s;
  scanf("%d %d\n",&n,&m);
  int a[n];
  int i,j,k;
  scanf("%d",&a[0]);
  for(i=1;i<n;i++)
  {
   scanf(" %d",&a[i]);
  }
  scanf("\n");
  for(j=1;j<=m;j++)
  {
	s=a[n-1];
	for(k=n-2;k>=0;k--)
	{
	  a[k+1]=a[k];
	}
	a[0]=s;
  }
  printf("%d",a[0]);
  for(i=1;i<n;i++)
  {
	  printf(" %d",a[i]);
  }
return 0;
}