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
{int n,i,j,a,b,r,m,c;

  scanf("%d",&n);
  r=0;m=0;
  for(i=1;i<=n;i++)
  {  for(j=1,b=255;j<=n;j++)
	  {scanf("%d",&a);
        if(a==0) m=m+1;
		if(b>a) r=r+1;
		b=a;
	  }
  }
  r=(r+2)/2;
  c=((m-2*r)+4)/2;
  m=(r-2)*(c-2);
  printf("%d\n",m);

  return 0;

}