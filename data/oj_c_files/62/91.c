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
        char a,b;
        int i=1;

        b=60;
        for(;i>0;i++)
        {
                a=cin.get();
                if(a=='\n') break;
                if(a!=' '||b!=' ') cout<<a;
                b=a;
        }
        return 0;
}
