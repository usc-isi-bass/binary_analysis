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
//*???????
//*??? ?? 1300012814  **
//*???2013.09,18  **
//********************************
int main()
{
	int n;
	double a, b, p, c, d, q;

	cin >> n;
	cin >> a >> b;
	p = b / a * 100;
	for (int i=1; i < n; i++ )
	{
		cin >> c >> d;
		q = d / c *100;
	    if (q - p > 5)
			cout << "better" <<endl;
		else 
			if (p - q > 5)
				cout << "worse" <<endl;
			else cout << "same" <<endl;
	}

return 0;
}