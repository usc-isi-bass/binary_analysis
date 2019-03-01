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

//**********************************
//***??????  1200012772   ****
//***???????             ****
//***???2012?12?7?        ****
//**********************************
int main()
{
	int n = 0, m = 0, a[101], *p = NULL, i = 0,temp = 0;
	cin >> n >> m;
	p = &a[1];
	for( ; p <= &a[n]; p++)
	{
		cin >> *p;
	}
	
	for (int i = 1; i <= m; i++)
	{
		temp = a[i];
		a[i] = a[n + i - m];
		for(int j = n + i - m; j >= i + 2; j--)
		{
			a[j] = a[j - 1];
		}
		a[i + 1] = temp;
	}
	cout << a[1];
	for (p = &a[2]; p <= &a[n]; p++)
		{
			cout <<' ' << *p;
		}
		cout << endl;
		return 0;
}
	

