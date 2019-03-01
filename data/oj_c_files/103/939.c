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
//*???2011??               **
//*??????                 **
//*???2013.1.12              **
//*******************************/


void read(char last, int time)
{
	char a = cin.get();
	if (a >= 'a' && a <= 'z')
		a -= 32;
	if (a == '\n')
	{
		cout << "(" << last << "," << time << ")";
	}
	else if (last == a)
	{
		read (last, time + 1);
	}
	else
	{
		cout << "(" << last << "," << time << ")";
		read (a, 1);
	}
}

int main ()
{
	char a = cin.get();
	if (a >= 'a' && a <= 'z')
		a -= 32;
	read(a, 1);
	return 0;
}
