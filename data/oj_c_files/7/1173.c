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
//  Created by Hsu Tzuyen on 12-12-24.
//  Copyright (c) 2012? Hsu Tzuyen. All rights reserved.
//


int main()
{
    char a[250], b[150], c[150];
    cin>>a>>b>>c;
    if (strstr(a,b)==NULL)
    {
        cout<<a;
        return 0;
    }
    char *p=strstr(a,b);
    int i=0;
    while (c[i]!='\0')
    {
        *p++=c[i];
        i++;
    }
    cout<<a;
    return 0;
}