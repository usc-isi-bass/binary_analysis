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
  int a[300],n,i,j,t,k;
  scanf("%d",&a[0]);
  for(i=1;;i++)
  {
    if(getchar()==',')
    scanf("%d",&a[i]);
    else
    break;
  }
 for(j=0,t=0;j<i;j++)
{
  if(a[j]>t)
  t=a[j];
}
for(j=0,k=0;j<i;j++)
{ 
   if(a[j]==t)
   continue;
   else if(a[j]>k)
   k=a[j];
 }
if(k==0)
printf("No");
else
printf("%d",k);
return 0;
}
  
  