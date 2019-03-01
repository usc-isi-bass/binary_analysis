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
    int x,y,ercha(int x,int y);
    scanf("%d %d",&x,&y);
    printf("%d",ercha(x,y));
    return 0;
}

int ercha(int x,int y)
{
          if(x==y) return x;
          else
          {
              if(x>y)
              {
              x=x/2;
              }
              else
              {
              y=y/2;
              }
              ercha(x,y);
          }
}