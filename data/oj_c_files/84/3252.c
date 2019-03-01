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
	int a;
	scanf("%d",&a);
	int sz[1000];
	int index;
	for(index=0;index<a;index++)
	scanf("%d",&sz[index]);
	int d,x,inde;
	d=sz[0];
	x=sz[0];
	for(inde=1;inde<a;inde++)
    {
	  if(sz[inde]>d)
	  {
		  x=d;
		  d=sz[inde];
      }
	  else if(sz[inde]>x)
		  x=sz[inde];
    }
    printf("%d\n",d);
	printf("%d\n",x);
	return 0;
}