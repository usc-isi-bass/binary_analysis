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
//*?? ??????          **
//*?? ??? 1100016602     **
//*?? 2011?12?14?        **
//****************************** 


int main()
{
    int n , a[100001] , b[100001] , *p , *q , i , j ; //???? a[i]????i??????b[i]??i??????? 
    cin >> n ;                                        //????? 
    memset(a , 0 , sizeof(a)) ;                       //????? 
    memset(b , 0 , sizeof(b)) ; 
    for ( ; ; )                                       //????????i????????1???j?????+1 
    {
        cin >> i >> j ; 
        if ((i == 0) && (j == 0))
            break ; 
        a[j] ++ ; 
        b[i] ++ ; 
    }
    for (p = &(a[0]) , q = &(b[0]) , i = 0 ; i < n ; i ++ ) //???????????????????????0???n - 1????????? 
    {
        if ((*(p + i) == n - 1) && (*(q + i) == 0))
        {
            j = i ;   //?i???? 
            break ; 
        }
    }
    if (j == n)                                             //?j????n???????? 
        cout << "NOT FOUND" << endl ; 
    else                                                    //?????????? 
        cout << j << endl ; 
    return 0 ; 
}

