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

// ???? 
int main()
{
    int i=0;
    char c[31]={'0'};
    cin.get(c,31);
    for (i=0;i<30;i++)
    {
        if (c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9')
        {
            if (c[i+1]=='0'||c[i+1]=='1'||c[i+1]=='2'||c[i+1]=='3'||c[i+1]=='4'||c[i+1]=='5'||c[i+1]=='6'||c[i+1]=='7'||c[i+1]=='8'||c[i+1]=='9')                                                 
                cout<<c[i];
            else
                cout<<c[i]<<"\n";
        }
    }
    return 0;
}