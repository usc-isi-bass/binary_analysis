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

int sushu(int i)
{          double c;
           int e; 
           int l=0;   
           c=sqrt(i);
           for (e=2;e<=c;e++)
          { if ((i)%e==0)
           break;} 
           if (e>c)
          return 1;
          else
          return 0;
          
}
int main ()
{   int d,i;
    scanf ("%d",&d);
    if (d>4)
    {for (i=5;i<=d;i++)
    {   
           
           if (sushu(i)==1 )
    {      if (sushu(i-2)==1)
          { printf ("%d %d\n",i-2,i); }}
        } 
        }

else 
printf ("empty");
}
