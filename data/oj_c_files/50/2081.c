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

//***********************
// ?????????  ** 
// ?  ?: ???      ** 
// ?  ?: 2012/11/18  ** 
//*********************** 
int main()
{
    int a, month[13] = {0, 13, 44, 72, 103, 133, 164, 194, 225, 256, 286, 317, 347}, w, i; 
    cin >> w;
    for (i = 1; i <= 12; i++)
        if ((month[i] + w - 1) % 7  == 5 )
           cout << i << endl;
    return 0;
} 