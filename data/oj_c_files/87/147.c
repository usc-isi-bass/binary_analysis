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
  int a[100],b[100],c[100],d[100],e[100],f[100],s,i;
  for(i=0;a[i]!=0;i++)
  {
    scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
  }
  for(i=0;a[i]!=0;i++)
  {
    s=(12+d[i]-a[i])*3600+(e[i]-b[i])*60+(f[i]-c[i]);
    printf("%d\n",s);
  }
  return 0;
}