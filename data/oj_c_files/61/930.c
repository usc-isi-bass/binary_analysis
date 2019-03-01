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
//  poj
//
//  Created by ChuPan,Wong on 9/27/13.
//  Copyright (c) 2013 ChuPan,Wong. All rights reserved.
//


int main(int argc, const char * argv[])
{
    int num[20];
    num[0]=num[1]=1;
    for(int i=2;i<20;i++){
        num[i] = num[i-1]+num[i-2];
    }
    int n;
    cin>>n;
    int x;
    while(n--){
        cin>>x;
        cout<<num[x-1]<<endl;
    }
    return 0;
}
