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
{   int n;
    cin>>n;
    int i;
    int sum=0,sum2=0;
    for(i=0;i<n+1;i++)
    {

        sum2=sum2+i*i;
        if((i%7==0)||(i>=70&&i<=79)||(i>10&&i%10==7))
        sum=sum+i*i;
    }
       cout<<sum2-sum;
    return 0;
}