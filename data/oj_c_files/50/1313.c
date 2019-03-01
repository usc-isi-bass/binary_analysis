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

//*******************************************************
//*11.2??  ?????                                 *
//*?????  ?? 1100012844                          *
//*???2011?11?2?                                  *
//*******************************************************
int main()
{
	// days????????????
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int w, i, a[13] = {0, 12}; // a??????1?1??i?13?????
	cin >> w; // ??w

	// ??1?1??i?13????????a[i]?
	for (i = 1; i < 12; i++)
		a[i + 1] = a[i] + days[i];

	// ??a??
	for (i = 1; i <= 12; i++)
		if ((w + (a[i] % 7)) % 7 == 5) // ????
			cout << i << endl; // ?????????i
	return 0;
}