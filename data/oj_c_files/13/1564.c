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
//  Created by ? ? on 12-12-13.
//  Copyright (c) 2012? ? ?. All rights reserved.
//

int main()
{
    int n,figure[20000]={0},num[100]={0},flag[100]={0};
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>figure[i];
    }
    flag[figure[0]]++;
    cout<<figure[0];
    for (int i=1; i<n; i++) {
        if (flag[figure[i]]==0) {
            flag[figure[i]]++;
            cout<<" "<<figure[i];
            continue;
        }
    }
    return 0;
}
