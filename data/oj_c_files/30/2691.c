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
  int n,i,s;
  s=0;
  i=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
	 if(i%7==0)
	     continue;
	 else if(i%10==7)
		 continue;
         else if(i/10==7)
		 continue;
	 else
		 s=s+i*i;
}
  printf("%d\n",s);
  return 0;
}