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
    const int MAX_LEN = 1000;
    int n,i,j;
    cin >> n;
    int num[MAX_LEN]={0};
    num[0]=1;
    for (i=0;i<n;i++)
    {
        for (j=0;j<MAX_LEN;j++)
        {
            num[j]=num[j]*2;
        }
        for (j=0;j<MAX_LEN;j++)
        {
            if (num[j]>=10)
            {
                num[j+1]=num[j+1]+num[j]/10;
                num[j]=num[j]%10;

            }
        }


    }
    i=MAX_LEN-1;
    while (num[i]==0)
    i--;
    for (;i>=0;i--)
    cout << num[i];
    return 0;

}
