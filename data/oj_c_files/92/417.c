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
  int k;
  for(k=0;;k++)
  {
  int n;
  scanf("%d",&n);
  if(n==0)
  return 0;
  int a[1000];//??????
  int b[1000];//??????
  int i,j;
  int d=0;
  int max=(-n)*200;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  scanf("%d",&b[i]);
  int t;//
  for(i=0;i<n;i++)//????
  {
   for(j=n-1;j>i;j--)
   {
    if (a[j]>a[j-1])
 {
  t=a[j];
  a[j]=a[j-1];
  a[j-1]=t;
 }
    if (b[j]>b[j-1])
 {
  t=b[j];
  b[j]=b[j-1];
  b[j-1]=t;
 }
   }
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    if(a[(j+i)%n]>b[j])
    d++;
    if(a[(j+i)%n]<b[j])
    d--;
   }
   if(d>max)
   max=d;
   d=0;
  }
  printf("%d\n",max*200);
  }
}

