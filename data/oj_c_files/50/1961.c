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

//****************************
//????1.cpp              *
//???2012?11?10?       *
//????? 1? 1200012895  *
//????????           *
//****************************
int main()
{
	int m[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}, w, i;       //m?1?11?????w?????i?????
	cin >> w;
	w = (w + 12) % 7;                                                       //?????13?????
	if (w == 5)                                                             //??????????1
		cout << "1" << endl;
	for (i = 1; i <= 11; i++)                                               //??2?12??13?????
	{
		w = (w + m[i] % 7) % 7;
		if (w == 5)                                                         //?????????????
			cout << i + 1 << endl;
	}
	return 0;
}