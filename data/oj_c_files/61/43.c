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

int f(int n)
{
   if (n==1)
      return 1;
   else if (n==2)
      return 1;
   else if (n>2)
      return(f(n-1)+f(n-2));
}
int main()
{
   int m,a;
   scanf("%d",&m);
   while (m--)
   {
      scanf("%d",&a);
      printf("%d\n",f(a));
   }

}
