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
 int a[1000],i=0,j=0;
 char d=',';
 while(d==',')
 {
  scanf("%d%c",&a[i],&d);
  i++;
 }
 int n=i,max=0;
 int b[n];
 i=0;
 while(i<n)
 {
  scanf("%d,",&b[i]);
  if(b[i]>max)
   max=b[i];
  i++;
 }
 int c[max];
 i=0;
 while(i<max)
 {
  c[i]=0;
  i++;
 }
 i=0;
 while(i<n)
 {
  j=a[i];
  while(j<b[i])
  {
   c[j]++;
   j++;
  }
  i++;
 }
 i=0;
 int m=0;
 while(i<max)
 {
  if(c[i]>m)
   m=c[i];
  i++;
 }
 printf("%d %d",n,m);
}