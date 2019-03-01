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
//  ?7???????
//
//  Created by ? ?? on 12-10-8.
//  Copyright (c) 2012? ? ??. All rights reserved.
//


int main()
{
    int n;
    cin >> n;
    
    int a , b , c , sum = 0 , k;
    
    for (int i=1; i<=n; i++)
    {
        //sum=0;
        
        a=i/10;
        b=i%10;
        //c=i-100*a-10*b;
        
        if (i%7!=0&&a!=7&&b!=7)
        {
            sum += i * i;
        }
        
        //k=k+sum;
    }
    cout << sum <<endl;
    
    return 0;
    
    
}
