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
 char a[200],b[200];
 int m[100],n[100],k,l,i,j,e=0;
 scanf("%s %s",a,b);
 k=strlen(a);
 l=strlen(b);
 if(k!=l)
 {
  printf ("NO");
  } 
  if(k==l)
  {
   for(i=0; i<k; i++)
   {
    for(j=0; j<k; j++)
    {
     if(a[i]==b[j])
     {
      b[j]=1;
      e++;
      break;
      }
     }
    }
    if(e==k)
    {
     printf ("YES");
     }
    else
    printf ("NO");
  }
return 0;
} 