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
//  Created by ? ?? on 12-12-27.
//  Copyright (c) 2012? ? ??. All rights reserved.
//


int main()
{
    int i = 0;
    char string[300];
    char substring[300];
    char replace[300];
    cin >> string;
    cin >> substring;
    cin >> replace;
    int l = strlen(string);
    int l1 = strlen(substring);
    int l2 = strlen(replace);
    char *p = strstr(string, substring);
    if (p != NULL)
    {
        while(i < l2)
        {
            *p = replace[i];
            i++;
            p++;
        }
    }
    cout << string;
    return 0;
}
