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


int m,n; 
int a[100],b[100];

void read()
{
    cin>>m>>n;//num of a,num of b
    for(int i=1;i<=m;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];    
}

void sort_()
{
    sort(a+1,a+m+1);
    sort(b+1,b+n+1);    
}

void stick()
{
    for(int i=1;i<=n;i++)
        a[m+i]=b[i];    
}

void print()
{
    for(int i=1;i<m+n;i++)
    cout<<a[i]<<' ';
    cout<<a[m+n];
}


int main()
{
    read();
    sort_();
    stick();
    print();
    
    return 0;
}
