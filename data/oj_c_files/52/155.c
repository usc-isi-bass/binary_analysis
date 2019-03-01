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
  int n,m,i,*num;
  scanf("%d%d",&n,&m);
  num=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++) 
  {
  scanf("%d",num+i);
  }
   printf("%d",*(num+n-m));
  for(i=n-m+1;i<n;i++)
  {
    printf(" %d",*(num+i));
  }
  for(i=0;i<n-m;i++)
  {
   printf(" %d",*(num+i));
  }
  free(num);

	return 0;
}