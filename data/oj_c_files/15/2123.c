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
  int n,m,k=0,i,j;
  int *a;
  scanf("%d",&n);
  a=(int*)(malloc(n*sizeof(int)));
  for(i=0;i<n;i++) 
  {
   for(j=0;j<n;j++)
   scanf("%d",&a[j]);
   for(j=0;j<n;j++)
   {
      if(a[j]==0)
      break;
   }
   for(m=j+1;m<n;m++)
     {if(a[m]==0)
      {k=k+m-j-1;
      break;}
      }
   }
   printf("%d",k);	
  return 0;
}