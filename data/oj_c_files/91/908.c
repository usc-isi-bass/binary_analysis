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

//****************************
//?????????? 
//??????1200012914
//???2012.12.04
//*************************


int main()
{
    char str[101], a;
    cin.getline(str, 101);
    int l = strlen(str);
    char *p;
    for (p = str; p < str + l - 1; p++)
    {
        a = *p + *(p + 1);
        cout << a; //????????????? 
    }
    a = (str[0] + str[l - 1]); //??????????? 
    cout << a << endl;
    
    return 0;
}
 
