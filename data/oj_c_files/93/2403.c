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
	double n;  //n??????????

	cin >> n;

	if((int)(n/3) == (n/3)&&(int)(n/5) == (n/5)&&(int)(n/7) == (n/7))
	{
		cout << "3 5 7" << endl;
	}

	else  if((int)(n/3) == (n/3)&&(int)(n/5) == (n/5)&&(int)(n/7) != (n/7))
	{
		cout << "3 5" << endl;
	}

	else  if((int)(n/3) == (n/3)&&(int)(n/5) != (n/5)&&(int)(n/7) == (n/7))
	{
		cout << "3 7" << endl;
	}

	else  if((int)(n/3) != (n/3)&&(int)(n/5) == (n/5)&&(int)(n/7) == (n/7))
	{
		cout << "5 7" << endl;
	}

	else  if((int)(n/3) != (n/3)&&(int)(n/5) != (n/5)&&(int)(n/7) == (n/7))
	{
		cout << "7" << endl;
	}

	else  if((int)(n/3) != (n/3)&&(int)(n/5) == (n/5)&&(int)(n/7) != (n/7))
	{
		cout << "5" << endl;
	}

	else  if((int)(n/3) == (n/3)&&(int)(n/5) != (n=5)&&(int)(n/7) != (n=7))
	{
		cout << "3" << endl;
	}

	else  if((int)(n/3) != (n/3)&&(int)(n/5) != (n/5)&&(int)(n/7) != (n/7))
	{
		cout << "n" << endl;
	}
	return 0;
}

