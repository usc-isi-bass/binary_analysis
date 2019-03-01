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

  int p(int a)
{     int k=2;
      for (k=2;k<a;k++)
{     if ((a % k) !=0)
{     if (k==(a-1))
      return 1;
      else continue;
}
      else return 0;
}
}
main()
{     int a,n;
      scanf("%d",&n);
      if (n<5)
      printf("empty");
      else
{
      for  (a = 2;a<=(n-2);a++)
{     if ((p(a)==1)&&(p(a+2)==1))
      printf("%d %d\n",a,a+2);
}
};
}