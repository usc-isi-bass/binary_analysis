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

//************************
// * 5.cpp
// *  ??3?5?7????
// *  Created on: 2012-9-30
// *  Author: ??  1200012934
// ************************
int main()                    //???
{
	int n;                    //????n
	cin >> n;                 //??n
	if (n % 3 == 0)     //?n??3????
	    {if (n % 5 == 0)
	        {if (n % 7 == 0)
	    	    cout << "3 5 7";//n??3?5?7??
	         else
	    	    cout << "3 5";  //n??3?5??
	        }
	     else  //??n??3??????5??
	        {if (n % 7 == 0)
		        cout << "3 7";  //n??3?7??
	         else
		        cout << "3";    //n???3??
	        }
	    }
	else              //?n???3????
	    {if (n % 5 == 0)
	        {if (n % 7 == 0)
		        cout << "5 7";  //n??5?7??
	         else  //??n???7??
		        cout << "5";    //n???5??
	        }
	     else     //??n???5??
	        {if (n % 7 == 0)
		        cout << "7";  //n??7??
	         else   //??n???7??
		        cout << "n";  //n???3?5?7??
	        }
	    }
    return 0;
}                           //?????
