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
  char s[301],c;
  gets(s);
  int i,num,a=0;
  for(c='A';c<='Z';c++)
    {
      num=0;
      for(i=0;s[i]!='\0';i++)
      {
        if(s[i]==c)
          num++;
      }
      if(num!=0)
        {
          printf("%c=%d\n",c,num);
          a++;
        }
    }
  for(c='a';c<='z';c++)
    {
      num=0;
      for(i=0;s[i]!='\0';i++)
      {
        if(s[i]==c)
          num++;
      }
      if(num!=0)
        {
          printf("%c=%d\n",c,num);
          a++;
        }
    }
  if(a==0)
    printf("No\n");
  return 0;
}