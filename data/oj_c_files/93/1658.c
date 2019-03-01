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
//*?????3?5?7????   **
//*????? 1200012845 **
//*???2012.9.26  **
//********************************
int main()
{
	int x;                                     //??x?????
	cin >> x;                                  //??x
	if ((x%3!=0)&&(x%5!=0)&&(x%7!=0))          //x??3,5,7?????
		cout << "n" << endl;              //??n
	else if (x%3==0)                           //x??3??
		cout << "3" ;                          //??3
		if (x%5==0)                            //x??5??
		{
			if (x%3==0) 	                    
				cout << " 5" ;                 
			else 
				cout << "5" ;  //?x???3????“ 5”?????“5”
		}
		if (x%7==0)                        //x??5??
		{
			if ((x%3==0)||(x%5==0))  
				cout << " 7" ;
			else 
				cout << "7" ;  //?x???3????“ 7”?????“7”
		}
	cout << endl;
	return 0;
}