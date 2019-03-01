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
//*???????**
//*?????? **
//*???2012.11.05**
//********************************

int main() 
{  
    int a[5][5], flag = 0; //??5*5??a?flag???????? 
    for (int i = 0; i < 5; i++)//?????????? 
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
    }//??????? 
    for (int r = 0; r < 5; r++)
    {
        int k = 0; //??k???????????
        for (int j = 1; j < 5; j++)//??????????? 
        {
            if (a[r][k] < a[r][j]) k = j;
        } //???????????k
        if (a[r][k] < a[(r + 4) % 5][k] &&
            a[r][k] < a[(r + 1) % 5][k] &&
            a[r][k] < a[(r + 2) % 5][k] &&
            a[r][k] < a[(r + 3) % 5][k])//????????????????5
        {
            flag = 1; //???????? 
            cout << r + 1 << " " << k + 1 << " " << a[r][k] << endl; //????????????? 
        }
    }
    if (flag == 0) cout << "not found" << endl; //????????“not found“ 
     
    return 0;                     
}   
