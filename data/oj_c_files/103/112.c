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




char l(char c);

int main()
{
    char s[1001];
    cin>>s;
    char c=l(s[0]);
    int m=1;
    for (int i=1;i<=strlen(s);i++)
    {
    if (c==l(s[i]))
    m++;
    else
    {cout<<'('<<c<<','<<m<<')';
    c=l(s[i]);m=1;
    }
    }
    cout<<endl;
    
}


char l(char c)
{
     if (c>='a'&&c<='z')
     return c+'A'-'a';
     else
     return c;
}