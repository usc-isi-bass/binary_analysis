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
    int a[6],b[6],i,j,sum;
     for (j=0;;j++)
  { 
    for (i=0;i<6;i++)
    {
        scanf ("%d",&a[i]);
    }
    if ((a[0]==0)&&(a[1]==0)&&(a[2]==0)&&(a[3]==0)&&(a[4]==0)&&(a[5]==0) )
    { break; }
    else 
    {
      sum=(a[3]+12-a[0])*60*60+(a[4]-a[1])*60+(a[5]-a[2]);
      printf ("%d\n",sum);
    }
  }
    return 0;
}
