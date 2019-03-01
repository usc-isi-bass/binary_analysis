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
    int n=0,a=0,b=10;
    scanf("%d",&n);
    while(n>1)
    {
                    if(n-(n/2)*2==0)
                    {
                                  b=n/2;
                                  printf("%d/2=%d\n",n,b);
                                  n=b;
                    }
                    else
                    {
                                  b=n*3+1;
                                  printf("%d*3+1=%d\n",n,b);
                                  n=b;
                    }
    }
    printf("End");
}