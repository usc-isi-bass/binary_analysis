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
//  Homework
//
//  Created by ??? on 13-11-20.
//  Copyright (c) 2013? ???. All rights reserved.
//


int jiaogu(int n)
{
    if(n==1)
    {
        cout<<"End"<<endl;
        return 0;
    }
    else
        if(n%2==1)
        {
            cout<<n<<"*3+1=";
            n=n*3+1;
            cout<<n<<endl;
            jiaogu(n);
        }
        else
        {
            cout<<n<<"/2=";
            n/=2;
            cout<<n<<endl;
            jiaogu(n);
        }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    jiaogu(n);
    return 0;
}
