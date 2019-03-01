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
  int a,j,b,c,i,n;
  char x[10000];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   { scanf("%s",x);
    a=strlen(x);
    for(j=0;j<a;j++)
       {
         for(b=0;b<a;b++)
           {if(b==j) continue; else if(x[b]==x[j])  break;}
        if(b==a) break;}
   if(j==a) printf("no\n");
   else printf("%c\n",x[j]);
     }
  return 0;
}
