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

//*************************************************
//??????3?5?7????                     *
//??????                                    *
//??9?28?                                     *
//************************************************* 
int main()
{   
   //????s?????? 
   int s;
   cin >> s;
   //???????3?5?7?????????? 
   if((s % 3 == 0) + (s % 5 == 0) + (s % 7 == 0) == 3)
       cout << "3 5 7";
   if((s % 3 == 0) + (s % 5 == 0) + (s % 7 == 0) == 2)
   {
         if(s % 3 != 0)
             cout << "5 7";
         if(s % 5 != 0)
             cout << "3 7";
         if(s % 7 != 0)
             cout << "3 5";
    }
    if((s % 3 == 0) + (s % 5 == 0) + (s % 7 == 0) == 1)  
    {
            if(s % 3 == 0)
                cout << "3"; 
            if(s % 5 == 0)
                cout << "5";
            if(s % 7 == 0)
                cout << "7";
     }  
    if((s % 3 == 0) + (s % 5 == 0) + (s % 7 == 0) == 0)
        cout <<"n"; 
    return 0;
}

