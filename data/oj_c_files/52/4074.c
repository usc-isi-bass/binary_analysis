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

void main()
{
  int a[200];
  int m,n,i;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
     //?????
    for(i=n-1+m;i>=m;i--)
		a[i]=a[i-m];
	for(i=0;i<m;i++)
		a[i]=a[n+i];
      printf("%d",a[0]);
	  for(i=1;i<n;i++)
		  printf(" %d",a[i]);
	  printf("\n");


}