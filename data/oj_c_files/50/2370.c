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

//******************************
//**?????******************
//**??? 1300012728***********
//**2013.10.13******************
int main()
{
	int w;                            // ????????
	cin >> w;
	int day = 12;                     // ?????????13??????
	
	// ????????? 
	for (int i = 1; i <= 12; i++)
	{
		if ((w + day) % 7 == 5)      // ????????i 
			cout << i << endl;
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10)
			day += 31;                 //  ?????31????31 
		else if (i == 2)             // ???2????28 
			day += 28;
		else                         // ??????30 
			day += 30;
	}
	return 0;
}