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
    int w, m = 1, day, a;
    cin >> w;
    day = 12;
    do
    {
        if(m == 3)
            day += 28;
        else
        {
           if(m == 5 || m == 7 || m == 10 || m == 12)
              day += 30;
           else
              if(m != 1)
              day += 31;
        }
        a = day % 7;
        if((a + w) % 7 == 5)
            cout << m << endl;
        m++;
    }while(m <= 12);
    return 0;
}
