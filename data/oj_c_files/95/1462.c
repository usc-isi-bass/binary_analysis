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
  int i,n1,n2;
  char s1[80],s2[80];
  gets(s1);
  gets(s2);
  n1=strlen(s1);
  n2=strlen(s2);
  i=-1;
    do
      {  i++;
         if(s1[i]>96)s1[i]-=32;
         if(s2[i]>96)s2[i]-=32;
      }
    while(s1[i]==s2[i]&&i<=n1-1&&i<=n2-1);


    if(s1[i]<s2[i])printf("<");
      else if(s1[i]>s2[i])printf(">");
          else printf("=");

  return 0;
}