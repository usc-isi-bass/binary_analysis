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
  int n,i,j,a[95],l=0;
  scanf("%d\n",&n);
  for(i=0;i<=n-2;i++)
  {
	  scanf("%d ",&a[i]);
  }
  scanf("%d",&a[i]);
  printf("%d",a[0]);
  for(i=1;i<=n-1;i++)
  {
      for(j=0;j<=i-1;j++)
	  {
		  if(a[j]!=a[i]) l++;
	  }
       if(l==i)  printf(",%d",a[i]);l=0;
  }
   return 0;
}