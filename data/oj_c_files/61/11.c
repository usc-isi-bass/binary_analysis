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

main()
{
   int n,i,a[10000],b[10000];
   int cal(int x);
   scanf("%d",&n);
   for(i=1;i<=n;i++) {scanf("%d",&a[i]);}
   for(i=1;i<=n;i++) {b[i]=cal(a[i]);}
   printf("%d",b[1]);
   for(i=2;i<=n;i++) {printf("\n%d",b[i]);}
}

int cal(int x)
{
   int i,a[30],t;
   a[1]=1;a[2]=1;
   for(i=3;i<=30;i++) {a[i]=a[i-1]+a[i-2];}
   t=a[x];
   return(t);
}