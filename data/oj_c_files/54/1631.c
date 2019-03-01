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

//***************************
//**???1.cpp
//**??????
//**???2013.12.4
//**??????????
//***************************

int n, k;
int n0; // n0???????
int flag; // flag???
void calc(int p);

int main()
{	
	cin >> n >> k;
	n0 = n;
	for (int i = 2; i <= 100000000; i++) // ???????
	{
		flag = 0;
		n = n0;
		calc(i);
		if (flag == 0) // ???n???????
		{
			cout << i << endl;
			break; // ???????
		}
	}
	return 0;
}
void calc(int p)
{
	if (n == 0)
		return;
	else
	{
		if ((p - k) % n0 == 0 && p - k >= n0) // ???????????
		{
			n--;
			calc((p - k) * (n0 - 1) / n0); // ?????????
		}
		else
			flag = 1; // ??????????
	}
}