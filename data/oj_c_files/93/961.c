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
//*??3,5,7????   **
//*?????? 1200012784 **
//*???2012.9.28  **
//********************************

int main()
{
	int num;         //??????num??????
	cin >> num;      //??num
	if (num % 3 == 0)//??3????num
	{
		cout << 3;   //?????3
		if (!(num % 5) || !(num % 7)) cout << ' ';  //?num???5?7??????????
	}
	if (num % 5 == 0)//??5????num
	{
		cout << 5;   //?????5
		if (!(num % 7)) cout << ' ';  //?num???7???????????
	}
	if (num % 7 == 0) cout << 7;  //?7??num????7
	if (num % 3 && num % 5 && num % 7) cout << 'n';  //?3?5?7?????num????n

    return 0;
}