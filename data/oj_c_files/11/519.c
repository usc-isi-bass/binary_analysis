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
    int A[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int a,b,c,i,y;
    scanf("%d%d%d",&a,&b,&c);
    y=0;
    for(i=0;i<b-1;i++)
    {
        y=y+A[i];
    }
    y=y+c;
    if(a%4==0&&a%100!=0||a%400==0)
    {
       if(b==1||b==2)
       {
          printf("%d",y);
       }
       else
       {
          y=y+1;
          printf("%d",y);
       }
    }
    else
    {
        printf("%d",y);
    }
    return 0;
}
    