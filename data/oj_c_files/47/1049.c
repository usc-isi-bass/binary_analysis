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

int main ()
{
    int n,i,j;
    cin >>n;
    int a[1000],b[1000];
    for (i=0;i<n;i++)
    cin >>a[i];
    for (i=n-1;i>=1;i--)
    {
        cout <<a[i] <<' ';
    }
    cout <<a[0]<<endl;
    return (0);
}
