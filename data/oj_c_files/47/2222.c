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
    int n,i,a[110],*p;
    p=a;
    cin>>n;
    for (i=0;i<n;i++)
        cin>>*p++;
    for (i=0;i<n-1;i++)
        cout<<*--p<<" ";
    cout<<*--p; 
    return 0;
}
