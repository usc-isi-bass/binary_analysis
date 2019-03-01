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
          int i,n,s[200],j=0,k=0;
          scanf("%d\n",&n);
          for(i=0;i<2*n;i+=2)
          {
           scanf("%d %d",&s[i],&s[i+1]);
          }
          for(i=0;i<2*n;i+=2)
              {
    	if(s[i]>=90&&s[i]<=140&&s[i+1]>=60&&s[i+1]<=90)
                  j++;
                  else 
                  j=0;
                  if(k<=j)
                  k=j;
              }
         printf("%d",k);

    return 0;
}

