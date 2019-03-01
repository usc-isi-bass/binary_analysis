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


int  cal(int y,int x)
{
   int i,sum;  
   if (x==1) return 1;
   else 
   {
      sum=0;  
      for (i=y;i<=x;i++)
      {
      if ((x%i==0)&&((x/i==1)||(x/i>y))) sum+=cal(i,x/i);
      
      }
      return sum;
   }
}
int main()
{
    int n,i,l;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
     scanf("%d",&l);   
    printf("%d",cal(2,l));
    if (i!=n) printf("\n");
    }
    
    return 0;
}        
