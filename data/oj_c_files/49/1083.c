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
  char a[500];
  int i,j,h,l,b[500],k;
  gets(a);
  l=strlen(a)-1;
  for(i=0;i<=l-1;i++)
       b[i]=0;
  for(i=0;i<=l-1;i++)
    {
       k=0;
       while(a[i-k]==a[i+1+k])
          {
              k++;
              if((i-k<0)||(i+k>l)) break;
           }
       b[i]=k;
     }
  for(j=1;j<=l/2+1;j++)
    for(i=1;i<=l-2;i++)
      if(b[i]>=j)
        {
           for(h=i-j+1;h<=i+j;h++)
            printf("%c",a[h]);
           printf("\n");
        } 
}