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
  int i,j,n;
  char s[1111],d;
  scanf("%d",&n);
  for(j=0;j<n;j++)
  {
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]=='A')
      {
        d='T';
      }
      if(s[i]=='T')
      {
        d='A';
      }
      if(s[i]=='C')
      {
        d='G';
      }
      if(s[i]=='G')
      {
        d='C';
      }
      s[i]=d;
    }
    printf("%s\n",s);
  }
  return 0;
}

