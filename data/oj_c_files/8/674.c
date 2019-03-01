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


int a[1000];
int b[1000];
int m,n;
void init()//???
{
    cin>>m>>n;
    int i,j;
    for (i=1;i<=m;i++)
    {
        cin>>a[i];
    }
    for (i=1;i<=n;i++) cin>>b[i];
}

void s()//??
{
    sort(a,a+m+1);
    sort(b,b+n+1);
}
void merge()//??
{
    int i;
    for (i=1;i<=n;i++)
    a[i+m]=b[i];
}
void print()//??
{
    int i;
    for (i=1;i<=m+n;i++)
    {
        cout<<a[i];
        if (i<m+n) cout<<' ';
    }
    cout<<endl;
}
int main()
{
    init();
    s();
    merge();
    print();
    return 0;
}
