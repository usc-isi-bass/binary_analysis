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
//  ????
//
//  Created by ? ?? on 12-11-12.
//  Copyright (c) 2012? ? ??. All rights reserved.
//


int main()
{
    char a[500];
    cin.getline(a, 500);
    int la, c, d, sum;
    la = strlen(a);
    int i, j, k;
    for (i = 2; i <= la; i = i + 2)
    {
        for (j = 0; j <= la - i; j++)
        {
            d = j;
            c = i + j - 1;
            sum = 0;
            do
            {
                if (a[d] != a[c])
                {
                    sum++;
                }
                d++;
                c--;
            } while (c > d);
            if (sum == 0)
            {
                for (k = j; k <= i + j - 1; k++)
                {
                    cout << a[k];
                }
                cout << endl;
            }
        }
    }
    
    
    return 0;
}
