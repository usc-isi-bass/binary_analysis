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
 char a[12],b[4];
 int i=0,n,m=0;
 char c;
 while(scanf("%s%s",a,b)!=EOF)
 {
  n=strlen(a);
  c=a[0];
  while(i<n)
  {
   if(a[i]>c)
    c=a[i],m=i;
   i++;
  }
  i=0;
  while(i<=m)
  {
   printf("%c",a[i]);
   i++;
  }
  printf("%s",b);
  while(i<n)
  {
   printf("%c",a[i]);
   i++;
  }
  i=0;
  printf("\n");
  m=0;
 }
}
