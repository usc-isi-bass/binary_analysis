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

/*???2011?11?28?
 *??????
 *????division.cpp
 *????? - 1090 ????
 */


int main()
{
	int n = 0, integer = 0;							//???????????n?????plate????apple
	int division(int, int);								//????putapple??????????plate?????
													//apple???????????
	cin >> n;										//??????n
	for (int i = 0; i < n; i++)
	{
		cin >> integer;
		cout << division(integer, integer) << endl;			//??????????putapple????????
	}
	return 0;
}


int division(int integer, int limit)
{
	if (limit <= 1)
		return 0;
	switch(integer)
	{
	case 1:
		return 1;
		break;
	default:
	{
		int sum = 0;
		for (int a = 1; a <= integer; a++)
		{
			if (integer%a != 0)
				continue;
			else if (integer/a > limit)
				continue;
			else
				sum += division(a, integer/a);
		}
		return sum;
	}
	break;
	}
}
