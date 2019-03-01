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
  int i,j,sz[300],n,mark=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&sz[i]);
  }
  for(i=0;i<n;i++)
  {
    mark=0;
    /*if(i==6)  printf("ok"); */
    /*if(i==8)   printf("ok"); */
    if(i==0)
    {
      printf("%d",sz[0]);
    }

    if(i==n-1)
    {
      for(j=0;j<i;j++)
      {
        if(sz[i]!=sz[j])
        {
          mark++;
        }
        else if(sz[i]==sz[j])    break;
      }
      if(mark==i)  printf(",%d",sz[i]);
    }

    for(j=0;j<i;j++)
    {
      if(sz[i]!=sz[j])
      {
        mark++;
      }
      else if(sz[i]==sz[j])   break;
      if(mark==i)   printf(",%d",sz[i]);
    }
  }
  return 0;
}
