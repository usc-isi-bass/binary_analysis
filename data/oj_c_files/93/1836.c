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

//********************************
//*???5.cpp   **
//*?????3?5?7????   **
//*?????? 1300012838 **
//*???2013.9.26  **
//********************************

int main()
{ 

    int a, num = 0;   //?? ??a?????? ????? 
    cin >> a;
    if (a % 3 == 0)
    {
        cout << "3";   //??3????3 
        num++;   //??????1 
    }
    if (a % 5 == 0)
    {
        if (num != 0)   //???????????? 
        {
            cout << " ";
        }
        cout << "5";   //??5????5
        num++;   //??????1
    }
    if (a % 7 == 0)
    {
        if (num != 0)   //????????????
        {
            cout << " ";
        }
        cout << "7";   //??7????7
        num++;   //??????1
    }
    if (num == 0)   //??????????n 
    {
        cout << "n";
    }
    
    return 0;                    
}  