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

void o(int n)
{
 int a[n];
 int i=0,j=0,x;
 while(i<n)
 {
  scanf("%d ",&a[i]);
  i++;
 }
 i=0;
 while(i<n)
 {
  while(j<n-1)
  {
   if(a[j]>a[j+1])
    x=a[j],a[j]=a[j+1],a[j+1]=x;
   j++;
  }
  j=0;
  i++;
 }
 j=0;
 while(j<n)
 {
  printf("%d",a[j]);
  if(j<n-1)
   printf(" ");
  j++;
 }
}
void main()
{
 int m,n;
 scanf("%d %d",&m,&n);
 o(m);
 printf(" ");
 o(n);
}
