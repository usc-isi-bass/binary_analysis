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

//???


int main()
{
    int a, b, c, righta, rightb, rightc;
    char fir , sec , thi;
    for(a = 1 ; a <= 3 ; a++)
    {
        for(b = 1 ; b <= 3 ; b++)
        {
            for(c = 1 ; c <= 3 ; c++)
            {
                righta = (b < a) + (c == a);
                rightb = (a < b) + (a < c);
                rightc = (c < b) + (b < a);
                if(((a < b && righta < rightb) || (a == b && righta == rightb) || (a > b && righta > rightb))
                   && ((c < b && rightc < rightb) || (c == b && rightc == rightb) || (c > b && rightc > rightb))
                   && ((a < c && righta < rightc) || (a == c && righta == rightc) || (a > c && righta > rightc)))
                   {
                       if (a == 1)
                           fir = 'A';
                       if (b == 1)
                           fir = 'B';
                       if (c == 1)
                           fir = 'C';
                       if (a == 2)
                           sec = 'A';
                       if (b == 2)
                           sec = 'B';
                       if (c == 2)
                           sec = 'C';
                       if (a == 3)
                           thi = 'A';
                       if (b == 3)
                           thi = 'B';
                       if (c == 3)
                           thi = 'C';
                       cout<<thi<<sec<<fir<<endl;
                   }
            }
        }
    }
    return 0;
}
