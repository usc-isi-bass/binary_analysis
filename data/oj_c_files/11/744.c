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
    int a,b,c=0;
    int i=0;
    int sum=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<b;i++)
    { 
                    sum=sum+30;
                    if(i==1||i==3||i==5||i==7||i==8||i==10)
                    {
                                                            sum=sum+1;
                                                            }
                    else if(i==2&&((a%100!=0&&a%4==0)||a%400==0))
                    {
                                                          sum=sum-1;
                    }
                    else if(i==2&&(a%4!=0||a%100==0&&a%400!=0))
                    {
                                    sum=sum-2;
                                    }
   }
   printf("%d",sum+c);
   return 0;
}
                    
 
