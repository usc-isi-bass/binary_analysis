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
  char a[100][100],b[100],c[100],t;
  int i,j;
  for(i=0;i<=100;i++)
  {
    scanf("%s",a[i]); 
    t=getchar();
    if(t!=' ')
    {
      j=i;
      break;
    }             
  }
  gets(b);
  gets(c);  
  if(strcmp(a[0],b)==0) printf("%s",c);
     else printf("%s",a[0]);             
  for(i=1;i<=j;i++)
   {
     if(strcmp(a[i],b)==0)printf(" %s",c);
     else printf(" %s",a[i]);                  
   }

  return 0;
}

  
