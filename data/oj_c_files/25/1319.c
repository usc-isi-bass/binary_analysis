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
//*?????(11-12) ??2?N??   **
//*?????? 1300012713 **
//*???2013.11.17  **
//********************************
int main() 
{ 
	int n, a[100] = {1}, b = 0, c = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < 100; j++)
		{
			a[j] = a[j] * 2 + c;
			if(c == 1) c = 0;
			if(a[j] >= 10)
			{
				a[j] = a[j] - 10;
				c = 1;
			}
		}
	}
	for(int k = 99; k >= 0; k--)
	{
		if(a[k] != 0 || b != 0)
		{
			cout << a[k];
			b++;
		}
	}
	return 0;
}