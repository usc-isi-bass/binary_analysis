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



int main( )
{
  int i,j=0,k,t=0,l,p,h,n,m;
  char str[3][600];
  for (i=0;i<3;i++)
    scanf("%s",str[i]); 
  m=strlen(str[1]);
  n=strlen(str[0]);
  p=strlen(str[2]);
  for (i=0;i<n-m+1,j<m;i++)
   {
     if (str[0][i]==str[1][j])
       {
         t++;
         j++;
       }
     else
       {
         j=0;
         t=0;
       }
     if (t==m)
       break;
   } 
  if (t!=m)
    printf("%s",str[0]); 
  else
    {
      for (l=i-m+1,h=0;h<p;h++,l++)
        str[0][l]=str[2][h];
      printf("%s",str[0]);
    }
  return 0;
}


