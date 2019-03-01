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

int main()
{
    int sum = 0;
    char a[1001] = {0};
    cin >> a;
    int i, count = 0;
    int k;
    k = strlen(a);
    char b = toupper(a[0]);
    for(i = 0; i < k; i++)
    {
        if(a[i] == b || toupper(a[i]) == b)
            sum++;
        else
        {
            cout << "(" << b << "," << sum << ")";
            sum = 1;
            b = toupper(a[i]); 
        }   
    }
    cout << "(" << b << "," << sum << ")"; 
    return 0;
}

 
