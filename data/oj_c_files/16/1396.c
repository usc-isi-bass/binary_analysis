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
    int n;
    cin>>n;
    int a[5];
    int count=1;
    for (int i=0;i<5;i++)
    {
        a[i]=n%10;
        if (n>=10)
        {
        n=(n-a[i])/10;
        count++;
        }
    }
    for (int i=0;i<count;i++)
    {
        cout<<a[i];
    }
    return 0;
}