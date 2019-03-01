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
  char a[100],b[100];
  int i,len;
  gets(a);
  gets(b);
  len=strlen(a);
  for(i=0;i<len;i++)
  {
    if(a[i]>='a'&&a[i]<='z')
      a[i]-=32;
    if(b[i]>='a'&&b[i]<='z')
      b[i]-=32;
  
    if (a[i]>b[i])
    {    
         printf(">");
         break;
    }    
     
    else
    if(a[i]<b[i])
    {
        printf("<");
       break;
     }
  }      
  if(i>=len)
    printf("=");
}