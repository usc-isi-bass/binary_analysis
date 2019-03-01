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

//*********************************************
//*@file:5_cpp                                *
//*@author:??? 1200012894                  *
//*@date?2012.10.2                           *
//*@function?????????3,5,7??       *
//*********************************************



int main()
{
    int x;                //x???????
    char n;               //??????n
    cin >> x;
	
    /*??x??3?????x???5??;
      ??x???3???????x???5??*/
    if (x % 3 ==0)               
    {
     /*??x??3,5???????x???7???
       ??x???5???????x???7??*/
        if (x % 5 ==0)            
        { 
	/*??x????3,5,7???
         ??3,5,7,????????????
         ??x??3?5??????7?????3?5*/
            if(x % 7 ==0)
            {         
	        cout << 3 << " " << 5 << " " << 7 ; 
            }
	        else
            {
	        cout << 3 << " " << 5;
            }
		}
        else if (x % 7 == 0)
        {
			cout << 3 << " " << 7;
        }

        /*??x???3?????3*/
        else 
        { 
            cout << 3;
	    }
	}

    /*??x???5???????x???7??*/
    else if (x % 5 == 0)
	{
		if (x % 7 == 0)
        {
	       cout << 5 << " " << 7;
         }
	    else 
        {
		    cout << 5;
        }
    }
    else if (x % 7 ==0)
        {
	        cout << 7;
        }
    else 
    {
		cout << 'n';
    }
	return 0;
}
