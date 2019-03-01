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
//*???2.cpp   **
//*???????????   **
//*?????? 1300012838 **
//*???2013.10.30  **
//********************************

int main()
{ 
    int num[100000], n, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cin >> k;
    for (int j = 0; j < n; j++)
    {
        if (num[j] == k)
        {
            for (int l = j+1; l < n; l++)
            {
                num[l-1] = num[l];
            }
            n--;
            j--;
        }
    }
    cout << num[0];
    for (int p = 1; p < n; p++)
        cout << " " << num[p];
    cout << endl;

    return 0;                    
}  