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
  int n;
  int a[50000];
  int b[50000];
  int k,i;
  int t,e;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d %d",&a[i],&b[i]);
  }
  for(k=1;k<n;k++)
  {
    for(i=0;i<n-k;i++)
	{
	  if(a[i]>a[i+1])
	  {
	    t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		e=b[i];
		b[i]=b[i+1];
		b[i+1]=e;
	  }
	}
  }
  for(i=0;i<n;i++)
  {
   if(b[i]<a[i+1])
   {
      printf("no");
	 break;
   }
   else
   {
     if((b[i]>b[i+1])&&(i!=n-1))
	 {
	   t=b[i];
	   b[i]=b[i+1];
	   b[i+1]=t;
	 }
   }
   }
  if(i==n)
printf("%d %d",a[0],b[n-1]);
  return 0;
}