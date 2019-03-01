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

//
//  main.cpp
//  ??3 5 7????
//
//  Created by Neptune on 12-10-2.
//  Copyright (c) 2012? ??? 1200012777. All rights reserved.
//

int main()
{
    int A;
    cin >> A;
    if (A % 3 == 0 && A % 5 == 0 && A % 7 == 0)
    {
        cout << "3 5 7" << endl;
    }
        else if (A % 3 == 0 && A % 5 == 0 && A % 7 !=0)
        {
            cout << "3 5" << endl;
        }
            else if (A % 3 == 0 && A % 5 != 0 && A % 7 == 0)
            {
                cout << "3 7" << endl;
            }
                else if (A % 3 != 0 & A % 5 == 0 && A % 7 ==0)
                {
                    cout << "5 7" << endl;
                }
                    else if (A % 3 == 0)
                    {
                        cout << "3" << endl;
                    }
                        else if (A % 5 == 0)
                        {
                            cout << "5" << endl;
                        }
                            else if (A % 7 == 0)
                            {
                                cout << "7" << endl;
                            }
                            else
                            {
                                cout << "n" << endl;
                            }
    return 0;
}


