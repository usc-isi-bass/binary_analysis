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


int main(int argc, char *argv[])
{
  char c;
  char a[200]={'\0'};
  int i,k;
  gets(a);
  for(i=199;i>=0;i--)
     {
         if(a[i]!='\0')
         {k=i;
          break;}
     }
  c=a[0];
  for(i=0;i<k;i++)
     a[i]=a[i]+a[i+1]-'\0';
  a[k]=a[k]+c-'\0';
  for(i=0;i<=k;i++)
    printf("%c",a[i]);	
  return 0;
}
