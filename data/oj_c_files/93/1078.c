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
//*?????????3,5,7 ????****************
//*??????? 1200012979 **********************
//*???2012.9.25 ********************************
int main()                      //?????
{                               //?????
	int x ;                     //??????
	cin >> x;                   //????
	if (x % 3 == 0 && x % 5 == 0 && x % 7 ==0)
		 cout << "3 5 7" << endl;  //?????3,5,7??
    else if (x % 3 == 0 && x % 5 == 0 && x % 7 !=0)
		 cout << "3 5" << endl;    //???????3,5??
	else if (x % 3 == 0 && x % 5 != 0 && x % 7 ==0)
         cout << "3 7" << endl;    //???????3,7??
	else if (x % 3 != 0 && x % 5 == 0 && x % 7 ==0)
         cout << "5 7" << endl;    //???????5,7??
    else if (x % 3 == 0 && x % 5 != 0 && x % 7 !=0)
		 cout << "3" << endl;    //???????3??
	else if (x % 3 != 0 && x % 5 != 0 && x % 7 ==0)
         cout << "7" << endl;    //???????7??
	else if (x % 3 != 0 && x % 5 == 0 && x % 7 !=0)
         cout << "5" << endl;    //???????5??
	else cout << "n" << endl;    //????????n
	return 0;                      //??????????0
}                                  //?????