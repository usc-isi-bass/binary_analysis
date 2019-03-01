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
  int n,t,i,Y;
  scanf("%d",&n);
  int s[n];
  for(i=0;i<=(n-1);i++)
  {
    scanf("%d",&t);
    s[i]=t;
  }
  for(i=0;i<=(n-1);i++)
  {
    int a=1,b=1,c=1;
    for(Y=3;Y<=s[i];Y++)
    {
    c=a+b;
    a=b;
    b=c;
    }
    printf("%d\n",c);
  } 
  getchar();
  getchar();
  getchar();
  getchar();
} 