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

int m,n,i;
double a;
double f(int t)
{int b=1,c=2,p,i;
 a=0;
 for(i=1;i<=t;i++)
 {a+=(double)c/(double)b;
  p=b+c;
  b=c;
  c=p;
 }
 return a;
}
void main()
{scanf("%d",&m);
 for(i=1;i<=m;i++)
 {scanf("%d",&n);
  printf("%.3f\n",f(n));
 }
}
