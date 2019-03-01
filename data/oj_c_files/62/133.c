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
//  Created by ? ? on 12-11-22.
//  Copyright (c) 2012? ? ?. All rights reserved.
//


int main()
{char str1[100],str2[100];
    int i,k=0,p,t=0;
    gets(str1);
    int len1=strlen(str1);
    for(i=0;t<len1;i++,t++)
    {
        if (str1[t]==' ') {
            for(p=t+1;str1[p]==' ';p++)
                t++;
        }
        str2[i]=str1[t];
        
        
    }
    for(p=0;p<i;p++)
    cout<<str2[p];
    return 0;
}
