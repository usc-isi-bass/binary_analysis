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
//*?????3?5?7????   **
//*?????? 1200012988 **
//*???2012.09.30  **
//********************************

int main()                                     //???
{
    int n;                                     //?n??
    cin >> n;                                  //??n
    //??n?????3?5?7??
    if(n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
    cout << "3 5 7" << endl;                   //??�3 5 7�
    else                                       //????
    {
        if(n % 3 == 0 && n % 5 == 0)           //??????3?5??
        cout << "3 5" << endl;                 //??�3 5�
        else
        {
            if(n % 5 == 0 && n % 7 == 0)       //??????5?7??
            cout << "5 7" << endl;             //??�5 7�
            else
            {
                if(n % 3 == 0 && n % 7 == 0)   //??????3?7??
                cout << "3 7" << endl;         //??�3 7�
                else                           //????????????
                {
                    if(n % 3 == 0)             //????3??
                    cout << "3" << endl;       //??�3�
                    if(n % 5 == 0)             //????5??
                    cout << "5" << endl;       //??�5�
                    if(n % 7 == 0)             //????7??
                    cout << "7" << endl;       //??�7�
                    //??n???3?5?7??
                    if(n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
                    cout << "n" << endl;         //??????n
                }
            }
        }

    }
    return 0;                                  //??????
}
