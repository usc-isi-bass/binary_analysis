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
//*???1.cpp   **
//*?????? 1200012768 **
//*???2012.11.10  **
//*????????  **
//********************************
int main()
{
	int w, days = 12, i = 1;
	cin >> w;
	do
	{
		int rem = days % 7;
		if ((rem + w == 5) || (rem + w == 12))
			cout << i << endl;
		switch (i)
		{
			case 1:
				days += 31; break;
			case 2:
				days += 28; break;
			case 3:
				days += 31; break;
			case 4:
				days += 30; break;
			case 5:
				days += 31; break;
			case 6:
				days += 30; break;
			case 7:
				days += 31; break;
			case 8:
				days += 31; break;
			case 9:
				days += 30; break;
			case 10:
				days += 31; break;
			case 11:
				days += 30; break;
			default :
				break;
		}
		i++;
	} while (i < 13);
	return 0;
}
