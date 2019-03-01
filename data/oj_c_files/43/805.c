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



int main(void)
{
    int i,j,m,k=0,temp=0;
    cin>>m;
    int arr_a[1300];
    for (i=3;i<=m;i++)
    {
        for (j=2;j<=floor(sqrt(i));j++)
            if (i%j==0) temp++;
        if (temp==0) arr_a[k++]=i;
        temp=0;
    }
    for (i=0;i<k;i++)
    {
        for (j=i;j<k;j++)
            if (arr_a[i]+arr_a[j]==m)
               cout<<arr_a[i]<<" "<<arr_a[j]<<endl;
    }
    return 0;
}
