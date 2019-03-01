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
//  The number of the date
//
//  Created by Jas-Cassie on 13-12-15.
//  Copyright (c) 2013? Jas-Cassie. All rights reserved.
//

int main()
{
    int y,m,d;
    int i=0,num=0;
    cin >> y >> m >> d;
    if( y % 4 == 0 && (y % 100 != 0 || (y % 400 == 0)))
    {
        //cout<<"1"<<endl;
        int a[13] = {31,29,31,30,31,30,31,31,30,31,30,31};
        for( i = 0 ; i < m-1 ; i ++ )
            num += a[i];
        num += d;
    }
    else
    {
        //cout<<"2"<<endl;
        int a[13] = {31,28,31,30,31,30,31,31,30,31,30,31};
        for( i = 0 ; i < m-1 ; i ++ )
            num += a[i];
        num = num + d;
    }
    cout << num <<endl;
    return 0;
}
