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
  char str1[500];
  int i,j,n,x=0,t;
  gets(str1);
  for (n=2;n<=strlen(str1);n++)
   {
     for (i=0;i<strlen(str1);i++)
      { 
       if((i+n)>strlen(str1)) break;                          
       for (j=i;j<=i+n-1;j++)
         {
           if(str1[j]==str1[i+i+n-1-j]) x=x+1;
          }
       if(x==n) 
         {
          for(t=i;t<i+n;t++) printf("%c",str1[t]);
          printf("\n");
          }
       x=0;
       }
     }
 
  return 0;
}
       