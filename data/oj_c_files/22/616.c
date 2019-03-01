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
 int a[400];
 int i=0,j=0,n=0,t,x,y;
 char c=',';
 while(c==',')
 {
  scanf("%d%c",&a[i],&c);
  i++;
 }
 n=i;
 i=2;
 if(a[0]>a[1])
  x=a[0],y=a[1];
 else
  if(a[0]==a[1])
   x=a[1],y=0;
  else
   x=a[1],y=a[0];
 while(i<n)
 {
  if(a[i]>x)
   y=x,x=a[i];
  else
   if(a[i]>y&&a[i]!=x)
    y=a[i];
  i++;
 }
 if(x==y||n==1||y==0)
  printf("No");
 else
  printf("%d",y);
}