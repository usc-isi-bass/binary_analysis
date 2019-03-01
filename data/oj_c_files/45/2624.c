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
  int k,g,r,n,i,j,x=0;
  char s[50],w[50];
  scanf("%s %s",s,w);
  k=strlen(s);
  g=strlen(w);
  for(i=0;i<g;i++) 
   { 
    if(w[i]==s[x])
     {
            r=i;
break;

     }
       }
   printf("%d",r);
  return 0;
}
              