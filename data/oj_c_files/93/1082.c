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
// *file:    3.cpp
// *author:  ????1200012986?
// *date:    2012-9-28
// *description:
//         ???????:??3?5?7???? 
//*********************************************
int main() // ??? 
{
	int k; // ??????k
	cin >> k; // ??????
	{
		if (k % 3 == 0 && k % 5 == 0 && k % 7 == 0) // ??k?????3?5?7??
			cout << "3" << " " << "5" << " " << "7" << endl; // ????3 5 7
		else if (k % 3 != 0 && k % 5 != 0 && k % 7 != 0) // ?k????????
			cout << 'n' << endl; // ??????n
	}
		{
			if (k % 15 == 0 && k % 7 != 0) // ?k????3,5??????7??
				cout << "3" << " " << "5" << endl; // ??3,5
			else if (k % 21 == 0 && k % 5 != 0) // ?k????3,7??????5??
				cout << "3" << " " << "7" << endl; // ??3,7
				else if (k % 35 == 0 && k % 3 != 0) // ?k????5,7??????5??
					cout << "5" << " " << "7" << endl; // ??5,7
		}
	
			{
				if (k % 3 != 0 && k % 5 != 0 && k % 7 == 0) // ?k???7??
					cout << "7" << endl; // ??7
				else if (k % 3 != 0 && k % 7 != 0 && k % 5 == 0) // ?k???5??
					cout << "5" << endl; // ??5
					else if (k % 5 != 0 && k % 7 != 0 && k % 3 == 0) // ?k???3??
						cout << "3" << endl; // ??3
			}
	return 0;
} // ?????
