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
    int i,s=0,k=0,n,b,c,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {k++;
     a=k%7 ;
     if(a!=0)
      {b=k/10;
       c=k-10*b;
       if(b!=7&&c!=7)
       s+=i*i;
      }
    }
    printf("%d",s);
    return 0;
}