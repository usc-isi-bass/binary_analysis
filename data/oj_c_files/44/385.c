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

int f(int num)
{
    int result=0,a[1000],i,j,u;
    if(num<0)
    num=num*-1;
    j=0;
    for(i=0;num>0;i++)
    {
                      a[i]=num%10;
                      num=num/10;
                      j++;
    }
    u=1;
    for(i=j-1;i>=0;i--)
    {
                       result=result+a[i]*u;
                       u=u*10;
    } 
    return result;
} 
int main () 
{
    int k,d,b[6],r;
    for(k=0;k<6;k++)
    {
                    scanf("%d",&b[k]);
    }
    for(k=0;k<6;k++)
    {
                    r=f(b[k]);
                    if(b[k]>=0)
                    {
                               printf("%d\n",r);
                    }
                    else
                    {
                        printf("-%d\n",r);
                    }
    }

    scanf("%d",&d);
    return 0;
}                           
                 