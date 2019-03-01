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

int main ()
{
    int a,j=0,i=3,k=0;
    cin >>a;
    while (i<=7)
    {
         if (a%i==0)
         j++;
         i+=2;
    }
    if (j==0)
    cout <<"n";
    else
    {
        i=3;
        while (i<=7)
        {
              if (a%i!=0)
              {
                i+=2;
                continue;
              }
              cout <<i;
              i+=2;
              k++;
              if (k==j)
              break;
              cout <<" ";
        }
    } 
    return 0;
}
 
