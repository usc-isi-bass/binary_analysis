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
    int n;
	float a , b, c;
	cin >> n;
	cin >> a >> b;
	c = b / a;
	int i;
	float x, a1, b1, c1;
	for (i=0; i<n-1; i++)
	{
		cin >> a1 >> b1;
	    c1 = b1 / a1;
		x = c1 - c;
		if (x > 0.05)
			cout << "better" << endl;
		else if (x < -0.05 )
			cout << "worse" << endl;
		else
			cout << "same" << endl;
	}
}