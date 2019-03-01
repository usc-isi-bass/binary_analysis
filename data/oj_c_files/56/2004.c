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
 char a,b,c,d,e,x,y;
 scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
 if(c=='\n')
  {x=a;
   a=b;
   b=x;
   printf("%c%c",a,b);}
 else if(d=='\n')
   {x=a;
    a=c;
    c=x;
    printf("%c%c%c",a,b,c); }
else if(e=='\n')
   {x=a;
    a=d;
    d=a;
    y=b;
    b=c;
    c=y;
    printf("%c%c%c%c",a,b,c,d);}
else {x=a;
      a=e;
      e=x;
      y=b;
      b=d;
      d=y;
     printf("%c%c%c%c%c",a,b,c,d,e);}
}

