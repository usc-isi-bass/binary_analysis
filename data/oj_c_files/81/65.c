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
  int n,m,i,j,d,s[5][5],t[5][5];
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      scanf("%d",&s[i][j]);
    }
  }
  scanf("%d%d",&n,&m);
  if(n>=0&&n<5&&m>=0&&m<5)
  {
    for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
      {
        if(i==m||i==n)
        {
          t[i][j]=s[m+n-i][j];
        }else{
          t[i][j]=s[i][j];
        }
      }
    }
    for(i=0;i<5;i++)
    {
      for(j=0;j<4;j++)
      {
        printf("%d ",t[i][j]);
      }
      printf("%d\n",t[i][4]);
    }
  }else{
    printf("error");
  }
  return 0;
}

