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


char s[1000];
int a[1000],l;
char x,y;

void f(int i,int k)
{
    if (k==l-1) return;
    if (s[k+1]==x)
    {
        a[i+1]=k+1;
        f(i+1,k+1);
    }
    else
    {
        cout << a[i] << " " << k+1 << endl;
        i--;
        f(i,k+1);
    }
}

int main()
{
    cin.getline(s,1000);
    l=strlen(s);
    x=s[0];
    f(0,0);
    return 0;
}
