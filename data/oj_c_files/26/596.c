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
    char c;
    int i; 
    while((c=getchar())!='\n')
    {
        if(c!=' ')
        {
            cout<<c;
            i=0;
            continue;
        }
        while(c==' ')
        {
            i=i+1;
            if(i>=2) break;
            cout<<c;
        }
    }
    return 0;
} 
