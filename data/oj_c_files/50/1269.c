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

/************************************
1.cpp
???Nov 2, 2011
??(10-3) ????? (2723)
?? 1100012886
************************************/

int main()
{
	int i, w, day[11]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30}; //???12????
	cin >> w;
	w = w - 1; //????????????~????????w=0~6
	w = (w + 12) % 7; //???1?13????
	if (w == 4) cout << 1 << endl;
	for (i = 0; i <= 10; i++)
	{
		w = (w + day[i]) % 7; //??(i+2)?13????
		if (w == 4) cout << i + 2 << endl;
	}
	return 0;
}
