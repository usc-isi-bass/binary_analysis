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
  int x,y,cx,cy,t;
  scanf("%d%d",&x,&y);
  t=2;cx=1;
  while(x>=t)
  {
    t=t*2;
	cx++;
  }
  t=2;cy=1;
  while(y>=t)
  {
    t=t*2;
	cy++;
  }
  while(!(x==y))
  {
    if(cx>=cy)
	{
      x=x/2;
	  cx--;
	}
	else
	{
      y=y/2;
	  cy--;
	}
  }
  printf("%d\n",x);
}