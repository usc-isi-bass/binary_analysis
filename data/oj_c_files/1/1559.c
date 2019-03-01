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

int p=0,q=2;
int jizu(int x)
{ 

  for(int i=q;i<=x-1;i++)
  { 
     if((x%i==0)&&(x/i>i))
      {
        p++;
        q=i;
        jizu(x/i);
        
      }
      else if((x%i==0)&&(x/i==i))
       {
         p++;  
       }
   }
  return p;    
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[100];
  for(int i=0;i<=n-1;i++)
   {
     scanf("%d",&a[i]);      
   }
  for(int i=0;i<=n-1;i++)
   {
    printf("%d\n",jizu(a[i])+1);
     p=0,q=2;      
   }  
 int y;
 scanf("%d",&y);    
    
}
