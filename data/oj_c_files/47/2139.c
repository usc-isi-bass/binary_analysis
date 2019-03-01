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

void reverse(int n)
{
    if(n>0)
    {
        int c;
        char d;
        cin>>c;
        d=getchar();
        reverse(n-1);
        cout<<d<<c;}
}
int main()
{
    int n;
    cin>>n;
    reverse(n);
    return 0;
}
