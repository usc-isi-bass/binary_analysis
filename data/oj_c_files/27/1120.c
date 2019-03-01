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
//*????????????   **
//*?????? 1300012972 **
//*???2013.10.11  **
//********************************
int main()
{
	int n;

	// ??????a,b,c???????x1,x2??????D?????d,e??????
	double a, b, c, x1, x2, D, d, e;
	cin >> n;
	for (int k=1; k<=n; k++)
	{
		cin >> a >> b >> c;

		if (b * b-4 * a * c > 0) // ????????????
		{
			x1=(-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2=(-b - sqrt(b * b - 4 * a * c)) / (2 * a); //????
			if (fabs(x1) < 1e-4)
				x1=0;
			if (fabs(x2) < 1e-4)                         //????
				x2=0;                                  
			cout << fixed << setprecision(5) << "x1=" << x1
				 << ";" << "x2=" << x2 << endl;         // ???
		}
		else if (b * b - 4 * a * c == 0) // ?????????
		{
			x1=(-b) / (2 * a);
			if (fabs(x1)<1e-4)
				x1=0;
			cout << fixed << setprecision(5) << "x1=x2=" << x1 << endl; //????
		}
		else
		{
			d=(-b) / (2 * a); // ?????
			e=sqrt(4 * a * c - b * b) / (2 * a); //?????
			if (fabs(d) < 1e-4)
				d=0;
			cout << fixed << setprecision(5) << "x1=" << d << "+" << e << "i"
				 << ";" << "x2=" << d << "-" << e << "i" << endl;
		}
	}
	return 0;
}
			