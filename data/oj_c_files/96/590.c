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
{ int a[N]={0},c[N]={0};
  long i,l,d,b=13;
  char a1[N];
  scanf("%s",a1);
  l=strlen(a1);
  for(i=0;i<l;i++) a[i]=a1[l-i-1]-'0';
  d=0;
  for(i=l-1;i>=0;i--)
  { d=d*10+a[i];
    c[i]=d/b;
    d=d%b;
  }
  while(c[l-1]==0 && l>1) l--;
  for(i=l-1;i>=0;i--) printf("%d",c[i]);
  printf("\n%d",d);
}