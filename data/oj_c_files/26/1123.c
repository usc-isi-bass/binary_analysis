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
    char str[LEN];
    gets(str);
    int len=strlen(str),k;
    for (int i=0; i<len; i+=k) {
        k=1;
        if (str[i]!=' ') {
            cout<<str[i];
        }
        else
        {
            cout<<" ";
            while (str[i+k]==' ') {
                k++;
            }
        }
    }
   return 0;
}
