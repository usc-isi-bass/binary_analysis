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

int reverse(int a)
{ 
  int s[100];
  int i=10,j,b=0;
  if (a<0)
  {
     a=a*(-1);
     for (j=1; ;j++)
     {
         s[j]=a%i;
         b=s[j]+b*10;
         a=a/i;
         if (a==0)
         break;
     }
     return -b;
  }
  else
  {
     for (j=1; ;j++)
     {
         s[j]=a%i;
         b=s[j]+b*10;
         a=a/i;
         if (a==0)
         break;
     }
  }
  return b;
}
int main ()
{
    int a[6],i;
    for (i=0;i<=5;i++)
    scanf ("%d",&a[i]);
    for (i=0;i<=5;i++)
    
        
        {
            printf ("%d\n",reverse(a[i]));
        }
    
getchar();
getchar();
getchar();
}
      
  