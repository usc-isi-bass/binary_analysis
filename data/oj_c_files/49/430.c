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
  int i,j,k,n=0;
  char a[500]={'\0'};
  gets(a);
  for(i=0;i<500;i++)
  {if(a[i]=='\0')
   {
     n=i;
     break;
   }
  }
  for(i=1;i<n;i++)
  {
      for(j=0;j+i<n;j++)
      {
            for(k=j;k<=j+i;k++)
            {
                 if(a[k]!=a[2*j+i-k])
                 break;
            }
            if(k==j+i+1)
            {
            for(k=j;k<=j+i;k++)
                printf("%c",a[k]);
            printf("\n");
            }
      }
  }
  return 0;
}
