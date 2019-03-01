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
    int n,a=0,b=0,c=0,d=0,age[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&age[i]);
    
    for(i=0;i<n;i++)
    {
                    if(age[i]<=18)
                    a++;
                    else
                    {
                        if(age[i]<=35)
                        b++;
                        else
                        {
                            if(age[i]<=60)
                            c++;
                            else
                            d++;
                        }
                    }
    }
    printf("1-18: %.2f",(double)(100*a)/(double)n);
    printf("%%\n");
    printf("19-35: %.2f",(double)(100*b)/(double)n);
    printf("%%\n");
    printf("36-60: %.2f",(double)(100*c)/(double)n);
    printf("%%\n");
    printf("60??: %.2f",(double)(100*d)/(double)n);
    printf("%%\n");
    return 0;
}