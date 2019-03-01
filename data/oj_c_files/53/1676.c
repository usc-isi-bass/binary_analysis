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
    int a;
    cin>>a;
    int b[a],c[a],d;
    for (int i=0;i<a;i++)
    {
        c[i]=0;
        cin>>b[i];
    }
    for (int i=0;i<a;i++)
    {
        for (int j=i+1;j<a;j++)
        {
            if (b[j]==b[i])
                c[j]++;
        }
    }
    for (int i=0;i<a;i++)
    {
        if (c[i]==0)
            d=i;
    }
    for (int i=0;i<d;i++)
    {
        if (c[i]!=0)
            i=i;
        else
            cout<<b[i]<<",";
    }
    cout<<b[d];
    return 0;
}