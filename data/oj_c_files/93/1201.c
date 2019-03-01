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

//*****************************************
//* ??????? **
//* ??? 1300012741 **
//* ???2013.9.25 **
//*****************************************


int main()
{
    int num; // ????????
    cin>>num; // ????????
    int sum = 0; // ??????

    if (num % 3 == 0)
    {
        cout<<"3";
        sum++;
    }
    if (num % 5 == 0)
    {
        if (sum)
            cout<<" ";
        cout<<"5";
        sum++;
    }
    if (num % 7 == 0)
    {
        if (sum)
            cout<<" ";
        cout<<"7";
        sum++;
    }
    if (!sum)
        cout<<"n";

    return 0;
}
