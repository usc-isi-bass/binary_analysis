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
    char c[1001]={'\0'};
    cin.getline(c, 1000, '\n');
    int i=0;
    while(1)
    {
        int m=1;
        if(c[i]=='\0')
            break;
        while(c[i]==c[i+1]||c[i]-'a'==c[i+1]-'A'||c[i]-'A'==c[i+1]-'a')
        {
            m++;
            i++;
        }
        if(c[i]-'a'>=0)
            c[i]='A'+c[i]-'a';
        cout<<'('<<c[i]<<','<<m<<')';
        m=1;
        i++;
    }
    return 0;}