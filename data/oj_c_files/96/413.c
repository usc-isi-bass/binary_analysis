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

//****************************************
//*?????13                       **
//*?????? 1100012927              **
//*???2011.11.3                     **
//****************************************
int main()
{
    char a[100];
    int i = 0, r, j = 0, b[100] ={0};
    cin >> a;
    for (r = 0; a[r] != 0; r++)
    {
        b[r] = (i * 10 + a[r] - '0') / 13;     //????????
        i = ((i * 10) + a[r] - '0') % 13;     //???
    }
    
    if (r == 1 || (r == 2 && b[1] == 0)) cout << b[0];
    else
    {
        while (b[j] == 0 ) j++;       //???0??????
        for (; j < r; j++)
            cout << b[j];
    }
    cout << endl;
    cout << i << endl;
	return 0;
}