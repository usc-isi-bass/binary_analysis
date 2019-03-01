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
 int n;
 scanf("%d",&n);
 float s=0;
 int i=0,a[n];
 while(i<n)
 {
  scanf("%d",&a[i]);
  s=s+a[i];
  i++;
 }
 s=s/n;
 i=0;
 float min=s,max=s;
 while(i<n)
 {
  if(a[i]<min)
   min=a[i];
  if(a[i]>max)
   max=a[i];
  i++;
 }
 if(max-s>s-min)
  printf("%.0f",max);
 else
  if(max-s<s-min)
   printf("%.0f",min);
  else
   printf("%.0f,%.0f",min,max);
}
