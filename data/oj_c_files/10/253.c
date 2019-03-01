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

main()
{
	int k[25],a[25];
 int i,j,n,max;
  scanf("%d",&n);
  for(i=0;i<n;i++)
	  a[i]=1;
  for(i=0;i<=n-1;i++)
  scanf("%d",&k[i]);
  for(i=n-2;i>=0;i--)
   for(j=i+1;j<=n-1;j++)
    if((k[j]<=k[i])&&(a[i]<=a[j]))
	 a[i]=a[j]+1;
  for(max=0,i=0;i<n;i++)
	  if(a[i]>=max) max=a[i];
	printf("%d",max);
}


