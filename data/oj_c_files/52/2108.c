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
  int m,n,i;
  int a[100];
  int *p,*p1;
  p=a;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
{
   scanf("%d",p++);
   }
   p1=&a[n-m];
 for(i=n-m;i<n;i++,p1++)
{
printf("%d ",*p1);
}
 p=a;
for(i=0;i<n-m-1;i++,p++)
{
printf("%d ",*p);
}
printf("%d",*p);
}