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
    int n;
    int number1=0,number2=0;
    scanf("%d",&n);
    int x,y;
    if (n>=5)
    {for (x=1;x<=n-2;x++)
    {int i=1;
       for(i;i<=x;i++)
        {if (x%i==0)
        number1=number1+1;}
       
       if (number1==2)
         {int i=1;
         y=x+2;
       for(i;i<=y;i++)
        {if (y%i==0)
        number2=number2+1;}
        if (number2==2)
       printf ("%d %d\n",x,y);
       
        }
       
        

      number1=0;
      number2=0;
    }}
    else
    printf("empty");
    
}                     
