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
5.cpp
???Nov 2, 2011
??(12-11) ??13
?? 1100012886
************************************/

int main()
{
	int i = 0, dividend = 0;
	char n[100];
	cin >> n;
	do
	{
		dividend = dividend * 10 + n[i] - '0';
		i++;
	} while ((dividend < 13) && (n[i] != '\0')); //????????
	while (n[i] != '\0')
	{
		cout << dividend / 13; //????i+1?????
		dividend = (dividend % 13) * 10 + n[i] - '0'; //?????
		i++;
	}
	cout << dividend / 13 << endl; //???????
	cout << dividend % 13 << endl; //????????????
	return 0;
}
