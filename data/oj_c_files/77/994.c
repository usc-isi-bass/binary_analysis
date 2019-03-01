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
  char a[101];
  int b[101]={0};
  scanf("%s",&a);
  int len=strlen(a);
  int i,j;
  
  int t=1;
  while(t)
  {
    for(i=0;i<len-1;i++)
    {
      if(a[i]==a[0]&&b[i]==0)
      {
      for(j=i+1;j<len;j++)
      {
        if(b[j]==1)
          continue;
        else if(a[j]==a[0])
          break;
        else
        {
          b[i]=1;
          b[j]=1;
          
          printf("%d %d\n",i,j);
          if(j==len-1)
           t=0;
          i=0;
          break;
        }
      }
      }
    }
  }
   return 0;
}