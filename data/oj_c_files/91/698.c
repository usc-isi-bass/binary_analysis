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

/*
 *???: qinpengzifuchuan.cpp
 *??????
 *????: 2012-12-10
 *??: ???????
 */


int main ()
{
    char s[101], s1[101];
    cin.getline(s,101);
    //??cin??????????
    for (int i = 0; i < strlen(s)-1; i++)
        *(s1+i) = *(s+i) + *(s+i+1);
    //???????
    *(s1+strlen(s)-1) = *(s+strlen(s)-1) + *s;
    //????
    *(s1+strlen(s)) = '\0';
    //?s1???????
    cout << s1;
    return 0;
}