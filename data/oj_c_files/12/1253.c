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
//*????? **
//*?????? **
//*???2012.10.29**
//********************************

int main() 
{  
    int a[16], whether, number = 0, numofpairs = 0; 
    //????a[16]?????NumOfPairs
    //whether?????????number?????????
    do
    {
        for ( int i = 0; i < 16; i++)
        {
            cin >> a[i]; //????
            if (a[i] == -1)
            {
                whether = 0; break;
            } //???-1?????????????
            else if (a[i] == 0)
            {
                whether = 1; break;
            } //???0???????????
            number++; //??????
        } //end??
        if (whether) //????-1???????
        {
            for (int j = 0; j < number; j++)
            {
                for (int k = 0; k < number; k++) 
                {
                    if (a[k] ==  2 * a[j]) numofpairs++;
                } //??????????
            }
            cout << numofpairs << endl; //??????
        }
        numofpairs = 0; number = 0; //????????? 
    } while (whether == 1); //???-1????? 
     
    return 0;                     
}   
