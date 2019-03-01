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
//  ???????
//
//  Created by ? ?? on 12-11-30.
//  Copyright (c) 2012? ? ??. All rights reserved.
//


int main()
{
    char a[1000];
    cin.getline(a, 1000);
    int la = strlen(a);
    int i, j, k;
    char *p;
    for (i = 0; i < la; i++)
    {
        if (a[i] == ' ')
        {
            j = 0;
            while (a[i + 1 + j] == ' ') j++;
            if (j > 0)
            {
                la = la - j;
                for (k = i + 1; k < la; k++)
                {
                    a[k] = a[k + j];
                }
            }
        }
    }
    for (p = a; p < &a[la]; p++)
    {
        cout << *p;
    }
    return 0;
}