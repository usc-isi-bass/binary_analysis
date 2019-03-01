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

//***************************************
//*?????(5-6) ????            **
//*?????? 1200012945             **
//*???2012.10.12                    **
//***************************************

int main()          
{                      

	int i, n, a[100]={0}, b[100]={0}, x, h;
	cin >> n;
	x = 0;
	h = 0;
	for (i=1; i<=n; i++)
	{
		cin >> a[i] >> b[i];
		if (a[i] <= 140 && a[i] >=90 && b[i] <=90 && b[i] >=60)
			x = x + 1;
		else if (x >= h)
		{
			h = x;
			x = 0;
		}
		else x = 0;
	}
	if (x >= h)
		h = x;
	cout << h << endl;
	return 0;                        

}           