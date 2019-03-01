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
    int flag = 0;
    for (;;)
    {
        c = cin.get();
        if (c == '\n') break;
        if (c != ' ') {cout << c; flag = 0;}
        else
        {
            if (flag) continue;
            else
            {
                flag = 1;
                cout << c;
            }
        }
    }
  
    return 0;
}