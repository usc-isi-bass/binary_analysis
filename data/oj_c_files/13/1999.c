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
int n,a[20000],i,j,f;

scanf("%d%d",&n,a);
printf("%d",*a);
for(i=1;i<n;i++)
{
  f=0;
  scanf("%d",a+i);
  for(j=0;j<i;j++)
  {
   if(*(a+i)==*(a+j))
   f=1; 
  }
if(f==0)
printf(" %d",*(a+i));
else continue;
}
return 0;
}

