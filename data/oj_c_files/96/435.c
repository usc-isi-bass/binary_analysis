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
//*???chuyi13                           **
//*????? 1100013004              **
//*???2011.11.8                   **
//****************************************
int main()
{
    char yu[500];
    int j = 0, r = 0, i = 0, chu[500] ={0};
    cin >> yu;
    for (r = 0; yu[r] != 0; r++)
    {
        chu[r] = (i * 10 + yu[r] - '0') / 13;     
         i = ((i * 10) + yu[r] - '0') % 13;     
    }
    
    if (r == 1 ) cout << chu[0] << endl << i << endl;
    else if (r == 2 && chu[1] == 0) cout << chu[0] << endl << i <<endl; 
    else
    {
    while (chu[j] == 0 && j <= 1) j++;      
    for (; j < r; j++)
        cout << chu[j];   
        cout << endl;
        cout << i<<endl;
    }
	return 0;
}