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

int main()
{
	int num, k = 0;
	cin >> num;
	if(num % 3 == 0)
		cout << "3";
	else
		k++;
	if(num % 5 == 0)
	{
		if(k == 1)
			cout << "5";
		else
			cout << " 5";
	}
	else
		k++;
	if(num % 7 == 0)
	{
		if(k == 2)
			cout << "7";
		else
			cout << " 7";
	}
	else
		k++;
	if(k == 3)
		cout << "n" << endl;
	else 
		cout << "\n";
	return 0;
}