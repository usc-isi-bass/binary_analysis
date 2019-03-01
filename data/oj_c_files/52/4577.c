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
   int m,n,i;
   cin>>n>>m;
    int a[n];
    for(i=m;i<n;i++)
    cin>>*(a+i);
    for(i=0;i<m;i++)
    cin>>*(a+i);
    cout<<*a;
    for(i=1;i<n;i++)
    cout<<' '<<*(a+i);
    return 0;
}