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
    int n;
    cin>>n;
    int num[100000]={0};
    for (int i=0; i<n; i++) {
        cin>>num[i];
    }
    int k;
    cin>>k;
    /*int t=0;
    for (int i=0; i<n; i++) {
        if (num[i]==k) {
            t++;
        }
    }
    for (int i=0; i<n-t; ) {
        if (num[i]==k) {
            for (int j=i+1; j<n-1; j++) {
                num[j-1]=num[j];num[j]=num[j+1];
            }
        }
        else
        {
            i++;
        }
    }
    cout<<num[0];
    for (int i=1; i<n-t; i++) {
        cout<<" "<<num[i];
    }*/
    int j;
    for ( j=0; j<n; j++) {
        if (num[j]!=k) {
            cout<<num[j];
            break;
        }
    }
    for (int i=j+1; i<n; i++) {
        if (num[i]!=k) {
            cout<<" "<<num[i];
        }
    }
    return 0;
}