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

//******************************
//* &sup3;&Igrave;&ETH;ò&Atilde;&ucirc;&pound;&ordm;&Otilde;&yacute;&sup3;&pound;&Ntilde;&ordf;&Ntilde;&sup1;          ** 
//* ×÷&Otilde;&szlig;&pound;&ordm;&Agrave;&icirc;&Otilde;&aelig;&Ograve;&raquo; 1300012948   ** 
//* &Ecirc;±&frac14;&auml;&pound;&ordm; 2013.10.24         ** 
//******************************
int main()
{
    int n, shou, shu, p = 0, q = 0, k;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
            cin >> shou >> shu;
            k = ((shou >= 90)&&(shou <= 140)&&(shu >= 60)&&(shu <= 90));
            q += k;
            if(k == 0)
            {
                 q = 0;
                 continue;
            }
            p = p >= q ? p : q;    
            
    }
    cout << p << endl;
    return 0;
}