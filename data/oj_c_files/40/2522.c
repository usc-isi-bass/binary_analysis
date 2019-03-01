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

int main ()
{
	double a, b, c, d, e ,s, S,PI = 3.1415926;
	cin >> a >> b >> c >> d >> e;
	e = e * PI / 180;
	s = ( a + b + c + d ) / 2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e / 2) * cos (e / 2) <= 0)
		cout << "Invalid input" << endl;
	else
	{
		S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e / 2) * cos (e / 2));
		cout << fixed << setprecision(4) << S << endl;
	}
	return 0;
}



