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

int main ()
{int x[1000];
  int y[1000];
  int i,n,s,t,j;
  char c;
for(i=0;;i++)
  { scanf("%d%c",&x[i],&c);
    if(c!=',') break;
  } 
 n=i+1;
for(i=0;;i++)
  { scanf("%d%c",&y[i],&c);
    if(c!=',') break;
  } 
  t=0;
 for(i=0;i<1000;i++)
 {   s=0;
	 for(j=0;j<n;j++)
	{   if( i>=x[j]&&i<y[j])
	    s++;
	 }
	 if(s>t) t=s;
 }
 printf("%d %d",n,t);

return 0;
}