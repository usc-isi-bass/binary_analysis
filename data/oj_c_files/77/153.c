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
  char c[100],sex;
  scanf("%s",c);
  int i,j,k=0,x[100],y[100],a,b,n;  
  n=strlen(c);
  sex=c[0];
  for(i=n;i>=0;i--)
  {
      a=0;b=0;
      if(c[i]!=sex)
      {
             for(j=i;j>=0;j--)
             {
                  if(c[j]==sex)
                  {
					  a++;
                  }
                  else
                  {
					  b++;
				  }
                  if(a==b)
                  {
                          x[k]=j;
                          y[k]=i;
                          k++;
                          break;
                  }
             }      
      } 
  }
  for(i=k-1;i>=0;i--)
  {
       printf("%d %d\n",x[i],y[i]);
  }
  return 0;
}