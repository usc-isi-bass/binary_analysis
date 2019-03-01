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
  int i=0,j,a,b,c,d,m=1;
  char s[50],w[50];
  scanf("%s %s",s,w);
  a=strlen(s);
  b=strlen(w);
  for(j=0;j<b;j++)
          {
            if(s[i]==w[j])
              {  c=j-i;
                 for(d=i+1;d<a;d++)
                   {if(s[d]==w[d+c])
                      m++;
                    }
                 if(m==a)
                   printf("%d",j);
               }
           }
}
