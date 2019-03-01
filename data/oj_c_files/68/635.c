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
  int f(int n);
  int n,i,j;
  scanf("%d",&n);
  for(i=6;i<=n;i+=2)
  {
    for(j=3;j<i;j++)
	{
	  if(f(j)==1&&f(i-j)==1)
	  {
	  printf("%d=%d+%d\n",i,j,i-j);
	  break;
	  }
	}
  }
return 0;
}
int f(int n)
{
  int i,a=sqrt(n),c;
  for(i=2;i<=a;i++)
  
    if(n%i==0) break;
	if(i>a) c=1;
    else c=0;
  return(c);
}