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

main()
{
  int i=0,j=0,k,x=0,y;
  char a[101];
  char b[101];
  gets(a);
  k=strlen(a);
  for(i=0;i<k;i++)
  {
    if(a[i]!=' ')
    {
      b[j]=a[i];
      j++;
      x=0;         
    } 
    else
    {
     if(x==0)
     {
     b[j]=a[i];
     j++;
     x=1;
     }
      
    }    
  }
  b[j]='\0';
  int n=0;
  n=strlen(b);
  for(i=0;i<n;i++)
  printf("%c",b[i]);
  getchar();
  getchar();    
} 
