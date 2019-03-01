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

/**
*@file 3.cpp
*@author ???
*@date 2013-10-10
*@description ?7???????
*/

int main() 
{
    int n,i,sum;
    cin >> n;
    i=1;
    sum=0;
 while(i<=n)
 {
    if(i%10!=7&&i%7!=0&&i/10!=7)
    {
        sum+=i * i;
     }
    i++;
 }
    cout << sum << endl;
    return 0;
}
