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
  int l,r=0;
  char *p,*q,a[100],b[100];
  scanf("%s %s",a,b);
  if(strlen(a)!=strlen(b)) printf("NO");
  else
  {
    l=strlen(a);
    for(p=a;p<a+l;p++)
    {
      for(q=b;q<b+l;q++)
      {
        if(*p==*q)
        {
          r++;
          *q=0;
          break;
        }
      }
    }
    if(r==l) printf("YES");
    else printf("NO");
  }
}