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
    int a[100]={0};
    int n,i;
    cin>>n;
    int *p=a;
    for(i=n-1;i>=0;i--)
    cin>>a[i];
    for(p=a;p<a+n-1;p++)
    cout<<*p<<" ";
    cout<<a[n-1];
    getchar();
    getchar();
    return 0;
}
       
