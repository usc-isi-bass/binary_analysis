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


int main()
{
    int n, all, cure; //?????n???????all,?????cure
    double x, y; //??????????? x,???????y 
    
    cin >> n;
    cin >> all >> cure; //??n?all?cure 
    
    x = (double)cure / all * 100; //?????????? 
    
    for ( int i = 0; i < n-1; i++)
    {
        cin >> all >> cure; //??all, cure 
        
        y = (double)cure / all * 100; //????????
        
        if ( y - x > 5 )              //??y-x??5????better 
             cout << "better" << endl;
        else
            if ( x - y > 5)           //??x-y??5????worse 
               cout << "worse" << endl;
        else
               cout << "same" << endl;  //????same
                   
    }
    
    return 0;   

}