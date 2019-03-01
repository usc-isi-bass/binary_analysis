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

int f( int a)
{
    if (a<=2)
    return 1;
    else 
    return f(a-1)+f(a-2);
}
main()
{
      int a,b,c,d,i;
      scanf("%d",&a);
      for (i=0;i<a;i++)
      {
          scanf("%d",&b);
          printf("%d\n",f(b));
      }
      getchar ();
      getchar ();
}
