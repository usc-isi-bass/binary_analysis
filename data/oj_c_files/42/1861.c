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

//*****************************************
//* ??????????? **
//* ?????? 1300012741 **
//* ???2013.10.30 **
//*****************************************


int main()
{
	int list[100000];
	int i, num, target; // ????????????????????
	int move = 0; // ??????
	int space_check = 0; // ????????

	cin >> num;

	for ( i = 0; i < num; i++ ) // ????
		cin >> list[i];

	cin >> target;

	for ( i = 0; i < num; i++ ) // ??????
	{
		if ( target != list[i] ) // ?????
		{
			list[i - move] = list[i];
			if ( space_check ) // ????
				cout << " ";
			else
				space_check = 1; 
			cout << list[i];
		}
		else
		{
			move++;
		}
	}

	return 0;
}