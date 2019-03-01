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

void order(int m,int n)
{  int i,s[100];
  for(i=0;i<m;i++)
  scanf("%d",&s[i]);
  for(i=m-n;i<m;i++)
  printf("%d ",s[i]);
  for(i=0;i<m-n-1;i++)
  printf("%d ",s[i]);
  printf("%d",s[i]);
}
main()
{ int a,b;
  scanf("%d %d",&a,&b);
  order(a,b);
}

