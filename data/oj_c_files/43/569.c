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
  int i,j,m,a,b;
  scanf("%d",&m);
  for(i=3;i<=m/2;i++)
{
  j=m-i;
  for(a=2;a<=sqrt(i);a=a+1)
{
 if(i%a==0) break;
}
  for(b=2;b<=sqrt(j);b=b+1)
{
 if(j%b==0) break;
}
if(a>sqrt(i)&&b>sqrt(j)) printf("%d %d\n",i,j);
}
}

