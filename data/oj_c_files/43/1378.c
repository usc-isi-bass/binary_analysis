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

int sushu(int a)
{
          int i,b;
          b=(int)sqrt(a);
          for(i=2;i<=b;i++)
          {
                           if(a%i==0)
                           break;
          }
          if(i==b+1)
            return 1;
          else 
            return 0;
}
main()
{
    int m,i;
    scanf("%d",&m);
    for(i=3;i<=m/2;i++)
    {
        if(sushu(i)==1&&sushu(m-i)==1)
        {
                                      printf("%d %d\n",i,(m-i));
        }               
    }
    getchar();
    getchar();
}
