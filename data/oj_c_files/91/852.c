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

//??????????????????....

//**************************** 
//*??????????      *
//*????? 1200012708     *
//*???2012?12?1?       *
//****************************

int main()
{
    char s[105], *pc = s; // pc???????? 
    int l, i;
    cin.getline(s, 105);
    l = strlen(s);
    s[l] = s[0]; // ????????????????? 
    for (i = 0; i < l; i++)
    {
        cout << (char)(*pc + *(++pc)); // ??????????? 
    }
    cout << endl;
  
    return 0;
} 