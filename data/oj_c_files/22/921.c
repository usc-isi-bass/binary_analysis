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
  char c=',';
  int n,a=-1,b=-1;
  while(c==',')
  {
    scanf("%d%c",&n,&c);
    if(n>a)
    {
      b=a;
      a=n;
    }
	else
	{
      if(n>b&&n<a)
	  {
	    b=n;
	  }
 
	}
  }
  if(b!=-1)
  {
    printf("%d",b);
  }
  else
  {
    printf("No");
  }
  return 0;
}