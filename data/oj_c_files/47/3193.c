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
    int s[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>s[i];
    int *p=&s[n];
    while(n>1)
    {
               p--;
               n--;
               cout<<*p<<' ';
    }p--;
    cout<<*p<<endl;
    return 0;
}
