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
   int i,m=0,k=0;
   char j;
   char a[300];
   scanf("%s",a);
   for(j='A';j<='Z';j++)
   {k=0;
     for(i=0;i<300;i++)
    {if(a[i]-j==0)
     k=k+1;
     if(a[i]=='\0')
    break;
    }
    if(k==0)
    continue;
    if(k>0)
   {printf("%c=%d\n",j,k);
    m=1;}
    
   }
   for(j='a';j<='z';j++)
   {
   k=0;
    for(i=0;i<300;i++)
    {if(a[i]-j==0)
     k=k+1;
      if(a[i]=='\0')
    break;
    }
    if(k==0)
    continue;
    if(k>0)
   {printf("%c=%d\n",j,k);
   m=1;}
   
   }
  if(m==0)
  printf("No");
return 0;
}

