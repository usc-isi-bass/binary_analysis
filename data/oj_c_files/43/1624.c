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

int p(int n)
{
for(int i=2;i*i<=n;i++)
   if (n%i==0) return 0;
   return 1;
    }
int main()
{
    int a,p(int n);
    scanf("%d",&a);
    for (int i=3;2*i<=a;i++)
     if (p(i)*p(a-i)!=0) printf("%d %d\n",i,a-i);
    }
