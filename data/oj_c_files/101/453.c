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
    int a,b,c;
    char Ra,Rb,Rc;
    for (a = 1; a <= 3; a++)
    {
        for (b = 1; b <= 3; b++)
        {
            for (c = 1; c <= 3; c++)
            {
                Ra = (b > a) + (c == a);
                Rb = (a > b) + (a > c);
                Rc = (c > b) + (b > a);
                if ( Ra == 3 - a && Rb == 3 - b && Rc == 3 - c)
                {
                    if (a > b && b > c)
                        cout << "CBA";
                    else
                    {
                        if (a > c && c > b)
                            cout << "BCA";
                        else
                        {
                            if (b > a && a > c)
                                cout << "CAB";
                            else
                            {
                                if (b > c && c > a)
                                    cout << "ACB";
                                else
                                {
                                    if (c > a && a > b)
                                        cout << "BAC";
                                    else
                                    {
                                        if (c > b && b > a)
                                            cout << "ABC";
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
