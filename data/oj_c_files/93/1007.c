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

//*****************************************************************
//* file 3.cpp                                                    *
//* name ??                                                     *
//* date 2012-9-29                                                *
//* description ??3 5 7????                                 *
//*****************************************************************
int main()                                    // ???
{                                             // ?????
	int m;                                    // ??????m
	cin >> m;                                 // ??m
	if ((m % 3 == 0) && (m % 5 == 0) && (m % 7 == 0))
		cout << "3 5 7" << endl;              // ??m??3 5 7????????3 5 7
	else                                      
		if (m % 3 == 0)                       // ?????1???m??3?????
		  if (m % 5 == 0)                     
			  cout << "3 5" << endl;          // ?m???5??????3 5
		  else
			  if (m % 7 == 0)                 
				  cout << "3 7" << endl;      // ?m???7??????3 7
			  else 
				  cout << "3" << endl;        // ????3
		else 
			if (m % 5 == 0)                   // ?????2???m??5??????
			   if (m % 7 == 0)
				   cout << "5 7" << endl;     // ?m???7??????5 7 
			   else cout << "5" << endl;      // ????5
		else 
			if (m % 7 == 0)
				cout << "7" << endl;          // ?????3???m??7????????7 
		else
			cout << "n" << endl;              // ?????4?????3 5 7?????n
		return 0;                             
}                                             // ?????

	   
