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

//****************************************************** 
//* ? ? ?   ?? ? ? ?                           *
//* ? ?      ?? ? ?                              *
//* ? ? ? ??2010 ? 12 ? 2 ?                    * 
//* ? ? ? ??? ? ? ?                           *
//* ? ?      ?1000010439                            *
//******************************************************
void jiaogu(int n)                               //??????????,????,???n 
{   
     if(n == 1)                                  //?n?1???End????? 
     cout << "End";
     else
     {
         if(n % 2 == 0)                          //?n????,????????????n 
         {
            cout << n << "/2=";
            n = n / 2;
            cout << n << endl;
         }
         else                                    //?n????, ????????????n
         {
             cout << n << "*3+1=";
             n = n * 3 + 1;
             cout << n << endl;
         }
         jiaogu(n);                              //???? 
     }
}
int main()
{
    int n;                                       //n???????? 
    cin >> n;                                    //??n 
    jiaogu(n);                                   //???? 
    return 0;
}