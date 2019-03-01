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


struct list
{
       int book;
       char name[30];
};


int main(int argc, char *argv[])
{
  int n,i,j;
  scanf("%d",&n);
  int a[26];
  struct list shelf[n];
  for (i=0;i<=25;i++)
      a[i]=0;
  for (i=0;i<=n-1;i++)
  {
      scanf("%d%s",&shelf[i].book,shelf[i].name);
      for (j=0;j<=strlen(shelf[i].name)-1;j++)
          a[shelf[i].name[j]-'A']++;
  }
  int max,flag=0,add=0,temp=0;
  max=a[0];
  for (i=0;i<=25;i++)
  {
      if (max<a[i])
      {max=a[i];flag=i;}
  }
  printf("%c\n",flag+'A');
  printf("%d\n",max);
  for (i=0;i<=n-1;i++)
  {
      for (j=0;j<=strlen(shelf[i].name)-1;j++)
      {
          if (shelf[i].name[j]==flag+'A')
          add++;
      }
  }
  for (i=0;i<=n-1;i++)
  {
      for (j=0;j<=strlen(shelf[i].name)-1;j++)
      {
          if (shelf[i].name[j]==flag+'A')
          {printf("%d",shelf[i].book);
          temp++;
          (temp<add)?printf("\n"):printf("");
          break;
          }
      }
  }
  return 0;
}
