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
char s[1000];
int i,j,k,n,sum=0;
gets(s);
n=strlen(s);
for(j=1;j<=n;(j=j+2))
{
  for(i=0;(i+j)<n;i++)
  {
     for(k=0;k<=(j/2);k++)
     { 
        if(s[i+j/2-k]==s[i+j/2+1+k])
        sum++;
     }
     if(sum==j/2+1)
     { 
            for(k=i;k<=i+j;k++)
            printf("%c",s[k]);
            printf("\n");
     }
     sum=0;
   }
}
getchar();
getchar();
}
