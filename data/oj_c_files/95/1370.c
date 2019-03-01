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
//  ??
//
//  Created by ???? on 13-11-13.
//  Copyright (c) 2013? ????. All rights reserved.
//

int main()

{
    char a1[80],a2[80];
    cin.getline(a1, 80);
    cin.getline(a2, 80);
    for(int i=0;i<=80;i++)
    {
        if(65<=a1[i]&&a1[i]<=90)
            a1[i]=a1[i]+32;
    }
    for(int i=0;i<=80;i++)
    {
        if(65<=a2[i]&&a2[i]<=90)
            a2[i]=a2[i]+32;
    }
    
    switch(strcmp(a1,a2))
    {
        case -1:cout<<'<';break;
        case 0:cout<<'=';break;
        case 1:cout<<'>';break;
    }
    return 0;
}
