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
  int i,n,k,j,p;
  p=0;
  scanf("%d",&n);
  if(n<5)
  printf("empty");
  if(n>=5)
  {
  for(i=1;i<=(n-2);i++)
  {
      for(k=2;k<i;k++)
      {
         if(i%k==0)
            break;
         if(k==i-1)
         {  
                  for(j=2;j<i+2;j++)
                  {
                      if((i+2)%j==0)
                      break;
                      if(j==i+1)
                      {
                      printf("%d %d\n",i,(i+2));
                      p=1;
                      }
                  }
         }       
      } 
  }
  }
if(p=0)
printf("empty");

return 0;
}
