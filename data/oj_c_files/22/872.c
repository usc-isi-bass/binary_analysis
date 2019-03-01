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
    int a=0,b,c=0;
    char d;
    do 
    {
                  scanf("%d%c",&b,&d);
                  if(a>b)
                  {
                         if(b>c)
                         c=b;
                  }
                  if(a<b)
                  {
                      if(a>c)
                      c=a;
                      a=b;
                  }

    }while(d==',');
    if(a==c || c==0)
    printf("No");
    else
    printf("%d",c);
    return 0;
}
