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


int main(int argc, char *argv[])
{
  int n,i,j,flag=0;
  char a[500];
  int b[52];
  for (i=0;i<=51;i++)
      b[i]=0;
  scanf("%s",a);
  for (i=0;i<=strlen(a)-1;i++)
  {
      if (a[i]>='a'&&a[i]<='z')
      {
         b[a[i]-'a'+26]++;
         if (flag==0)
            flag=1;
      }
      if (a[i]>='A'&&a[i]<='Z')
      {
         b[a[i]-'A']++;
         if (flag==0)
         flag=1;
      }
  }
  if (flag!=0)
  {
  for (i=0;i<=25;i++)
  {
      if (b[i]!=0)
      {
         printf("%c=%d\n",i+'A',b[i]);
      }
  }
  for (i=26;i<=51;i++)
  {
      if (b[i]!=0)
      {
       printf("%c=%d\n",i+'a'-26,b[i]);
      }
  }
  }
  else
  printf("No");

  return 0;
}
