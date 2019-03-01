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
    int w;
    int i,j;
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&w);
    w--;
    for (i=0;i<12;i++)
        for (j=1;j<=day[i];j++)
            {
               w++;
               if (w>7) w=w-7;
               if ((j==13)&&(w==5))
                  printf("%d\n",i+1);
            }
}
    
