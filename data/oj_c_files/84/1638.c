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
{int a,x,i=2,y,m1,m2=0;
 scanf("%d",&a);
 scanf("%d",&x);
 m1=x;
 while (i<=a)
 {scanf("%d",&y);
  if (m1<y)
	  {m2=m1;
       m1=y;}
  else if(m1>=y&&y>m2)
  { m2=y;}
    i++;}
 printf("%d\n%d\n",m1,m2);
return 0;
}
