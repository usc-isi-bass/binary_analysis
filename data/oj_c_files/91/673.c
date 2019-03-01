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
 *????friend.cpp
 *??????
 *?????2012-12-13
 *??????????
 */



int main()
{
    int n;
    char s[102],*p=s; // s??????p?????
    cin.getline(p,sizeof(s)); // ??
    n=strlen(p); // ??
    *(p+n)=*p; // ????????
    for (;p<s+n;p++)
        cout << (char) (*p+*(p+1)); // ??
    cout << endl;
    return 0;
}
