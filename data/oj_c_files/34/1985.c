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
    int a=1,b=1,i=1;
    scanf("%d",&a);
    for(i=a;i!=1;i=b)
    {
    if(i%2==0)
    {
       b=i/2;       
    printf("%d/2=%d\n",i,i/2);
                       }
    else
    {
        b=i*3+1;
    printf("%d*3+1=%d\n",i,i*3+1);
                        }
                                   }                   
    printf("End");                    
    
    }