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

int reverse(int num)
{
    int x,answer=0;
    if(num>0)
    {
             do
             {
                     x=num%10;
                     answer=x+answer*10;
                     num=num/10;
             }
             while(num!=0);
             return answer;
    }
    else if(num==0)
         return 0;
    else
    {
             num=-num;
             do
             {
                     x=num%10;
                     answer=x+answer*10;
                     num=num/10;
             }
             while(num!=0);
             answer=-answer;
             return answer;
    }
}
int main()
{
    int j,y;
    for(j=0;j<6;j++)
    {
                    scanf("%d",&y);
                    int result=reverse(y);
                    printf("%d\n",result);
    }
}
