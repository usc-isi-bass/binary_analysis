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
//  hw
//
//  Created by ? ? on 12-12-16.
//  Copyright (c) 2012? ? ?. All rights reserved.
//


int main(int argc, const char * argv[])
{
    int num;
    cin>>num;
    int money[6]={100,50,20,10,5,1};
    for (int i=0; i<6; i++) {
        cout<<num/money[i]<<endl;
        num-=(num/money[i])*money[i];
    }
    return 0;
}
