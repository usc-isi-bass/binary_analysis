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
 int n, i, j, len, c, zb[101], fb[101];
 char a[101], s[101];
 scanf("%d", &n);
 for(i=0;i<n;i++)
 {
  scanf("%s", a);
  len=strlen(a);
  for(j=0;j<len;j++)
  {
   s[j]=a[j];
  }
  s[len] = '\0';
  for(j=0;j<len;j++)
  {
   if(s[j]!='('&&s[j]!=')')
   {
    s[j]=' ';
   }
  }
  int o=0, h=0;
  for(j=0;j<len;j++)
  {
   if(s[j]=='(')
   {
    c=j;
    zb[o]=j;
    o++;
   }
   if(s[j]==')'&& o>0)
   {
    s[j]=' ';
    s[c]=' ';
o--;
if(o > 0) c = zb[o - 1];
   }
  }
  for(j=0;j<len;j++)
  {
   if(s[j]=='(')
   {
    s[j]='$';
   }
   if(s[j]==')')
   {
    s[j]='?';
   }
  }
  printf("%s\n%s", a, s);
 printf("\n");
 }
 return 0;
}
