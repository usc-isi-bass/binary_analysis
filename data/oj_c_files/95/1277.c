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


void trans(char a[])
{
     int i;
     for (i=0;i<=strlen(a)-1;i++)
     {
         if (a[i]>='A'&&a[i]<='Z')
            a[i]=a[i]+32;
         }
}

int main(int argc, char *argv[])
{
  char a[80],b[80];
  gets(a);
  gets(b);
  trans(a);
  trans(b);
  int i,j,flag=1;
  for (i=0,j=0;i<=strlen(a)-1&&j<=strlen(b)-1;i++,j++)
  {
      if (a[i]<b[j])
      {
         printf("<");
         flag=0;
         break;
      }
      else if (a[i]>b[j])
      {
           printf(">");
           flag=0;
           break;
      }
  }
  if (flag==1)
  printf("="); 	
  return 0;
}
