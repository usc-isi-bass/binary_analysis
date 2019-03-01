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
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int k[20];
    k[1]=31;k[2]=28;k[3]=31;k[4]=30;k[5]=31;k[6]=30;k[7]=31;k[8]=31;k[9]=30;
    k[10]=31;k[11]=30;k[12]=31;
    int i=1;
    int sum=0;
    while (i<b)
    {
          sum = sum+k[i];
          i++;
    }
    sum=sum+c;
    if (b>2)
    {if ((a%4==0&&a%100!=0)||a%400==0)
      
    sum++;
      }
    printf("%d\n",sum);
    getchar();
    getchar();
}

