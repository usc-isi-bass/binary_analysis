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
 int a[20000],b[20000],i,j,k=0,flag,n;
 scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
 for(i=0;i<=n-1;i++)
 {
  flag=1;
  for(j=0;j<=i-1;j++)
   if(b[j]==a[i])
   {
    flag=0;
    break;
   }
  if(flag)
  {
   b[k]=a[i];
   k++;
  }
 }
 for(i=0;i<=k-2;i++)
  printf("%d ",b[i]);
  printf("%d",b[k-1]);
} 
