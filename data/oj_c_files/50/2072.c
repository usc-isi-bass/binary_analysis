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
//*????????   **
//*?????? 1200012827 **
//*???2012.11.18  **
//********************************
int main()
{
    int month[12];                          //????????????
    month[0]=31;
    month[1]=28;
    month[2]=31;
    month[3]=30;
    month[4]=31;
    month[5]=30;
    month[6]=31;
    month[7]=31;
    month[8]=30;
    month[9]=31;
    month[10]=30;
    month[11]=31;
    int a;
    cin >> a;
    int date[12],i;
    date[0]=12;
    for (i=1;i<=11;i++)
    {
        date[i]=date[i-1]+month[i-1];     //??????????????????
    }
    for (i=0;i<=11;i++)
    {
        if (((date[i]%7)+a)%7==5)         //????????
        {
                         cout<< i+1 << endl;
        }
    }
     return 0;
}
    
