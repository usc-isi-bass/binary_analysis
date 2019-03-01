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



int num;
int dg(int m,int limit);

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int m; cin>>m;
        num=0;
        dg(m,2);
        cout<<num<<endl;
    }
    return 0;
}
int dg(int m,int limit)
{
    for (int i=limit;i<=m/2;i++)
        if (m%i==0) dg(m/i,i);
    if (m>=limit) num++;
    return 0;
}

