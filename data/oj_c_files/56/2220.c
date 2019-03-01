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
    int sum=0,n,x[5],i,j=0;
    scanf("%d",&n);
    for (i=0;i<=4;i++)
        {
            if (n>=pow(10,4-i)){
                x[i]=n/pow(10,4-i);
                n= n - x[i]*(pow(10,4-i));
                }
            else x[i]=0;
        }
    for (i=0;i<=4;i++){
        if (x[i]==0) j++;
        }

    for (i=j;i<=4;i++){
        sum = x[i]*(pow(10,i-j))+sum;
        }
    printf("%d",sum);
    return 0;
    }