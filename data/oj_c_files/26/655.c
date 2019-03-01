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
{char a[150],b[150],s=0;
gets(a);
int l=strlen(a);
for (int i=0;i<=l-1;i++)
 {
  if (a[i]!=' '){s++;b[s]=i;}
  if (a[i]==' '){s++;b[s]=i;
  while (a[i+1]==' ')i++;}
 }
for (int i=1;i<=s;i++)
 {
  int j=b[i];cout<<a[j];
  //while (a[j]!=' '){j++;cout<<a[j];}
 }
return 0;
}
