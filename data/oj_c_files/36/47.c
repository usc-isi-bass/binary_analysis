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
  char a[500],b[500];
  int i;
  for(i=0;i<=499;i++)
  {
    a[i]='\0';
    b[i]='\0';
  }
  scanf("%s %s",a,b);
  if(strlen(a)==strlen(b))
  {
    int j;
    for(i=0;a[i]!='\0';i++)
    {
      for(j=0;j<500;j++)
        {
          if(a[i]==b[j])
          {
            b[j]='\0';
            break;
           }
         }
     }
   if(strlen(b)==0)
   printf("YES");
   else printf("NO");
  }
  else printf("NO");
return 0;
}