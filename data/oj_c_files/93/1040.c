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

//*********************************************************
//* ? ??3.cpp                                          *
//* ? ??? ? 1200012916                               *
//* ? ??2012?9?29?                                  *
//* ? ??????3?5?7????                        *
//*********************************************************
 
int main()                                  //???
{                                           //?????
	int a, a1, a2, a3;                      //?????????
	cin >> a;                               //??????
	a1 = a % 3;                             //??????3??
	a2 = a % 5;                             //??????5??
	a3 = a % 7;                             //??????7??
	
	{                                       //??????
		
		if (a1 == 0)                        //?????3??
		{                                   
			if (a2 == 0)                    //??3????????5??
			{                               
				if (a3 == 0)                //??5????????7??
					cout << "3 5 7" <<endl; //??7?????�3 5 7�
				else                        
					cout << "3 5" <<endl;   //?????�3 5�
			}
			else                            //???5??
			{
				if (a3 == 0)                //?????7??
					cout << "3 7" <<endl;   //??7?????�3 7�
				else                        
					cout << "3" <<endl;     //?????�3�
			}
		}
		
		else                                //???3??
			if (a2 == 0)                    //?????5??
			{
				if (a3 == 0)                //??5????????7??
					cout << "5 7" <<endl;   //??7?????�5 7�
				else                        //??
					cout << "5" <<endl;     //??�5�
			}
			else                            //???5??
				if (a3 == 0)                //?????7??
					cout << "7" <<endl;     //??7?????�7�
				else                        //??
					cout << "n" <<endl;     //??�n�
	
	}                                       //??????
	
	return 0;
}                                           //?????
		
			