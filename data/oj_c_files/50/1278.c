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

// ?????
// ??? 1100012820
// 20111102
//******************
int main()
{
	int w;
	cin >> w;
	int i = 0, days = 0;
	for (; i <= 11; i++)
	{
		switch(i)
		{
		case 0: days += 12; break;
		case 1: 
		case 3:
		case 5:
		case 7:
		case 8:
		case 10: days += 31; break;
		case 6:
		case 9:
		case 11:
		case 4: days += 30; break;
		case 2: days += 28; break;
		}
		if ((days % 7 + w) % 7 == 5)
			cout << i + 1 << endl;
	}
	return 0;
}