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
//  ??3?5?7????
//
//  Created by ? ?? on 12-9-26.
//  Copyright (c) 2012? ? ??. All rights reserved.
//

int main()
{
    int m;
    cin>>m;
    
    if(m % 3 == 0)
        cout << 3;
    if (m % 5 == 0 && m % 3 == 0)
    {
        cout << " ";
        cout << 5;
    }
    else if (m % 5 == 0 && m % 3 != 0)
        cout << 5;
    if (m % 7 == 0)
    {
        if (m % 5 != 0 && m % 3 != 0)
        {
            cout << 7 ;
        
        }
        else
            cout << " " << 7 ;
    }
    
    if(m % 3 != 0 && m % 5 != 0 && m % 7 != 0)
        cout << "n" ;
    return 0;
}
