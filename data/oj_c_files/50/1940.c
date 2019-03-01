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
//*????1.cpp                ** 
//*????????             **
//*?????? 1200012834      **
//*???2012.11.9              **
//********************************

int main()
{
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int a[12] = {13};
	int w, i;
	for (i = 1; i <= 11; i++)
	{
		a[i] = a[i-1] + days[i-1];
	}
	cin >> w;
	for (i = 0; i <= 11; i++)
	{
		if((a[i] - 1 + w) % 7 == 5)
		{
			cout << i+1 << endl;
		}
	}
	return 0;
}