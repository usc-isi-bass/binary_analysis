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
	int n , i ;
	double y , a , b , a1 , b1;

	cin >> n >> a >> b;

	for (i = 1; i <= n - 1; i ++)
	{
		cin >> a1 >> b1;
		
		y = b1 / a1 - b / a;
		
		if (y > 0.05)
			cout << "better" << endl;
		
		else if (y < -0.05)
			cout << "worse" << endl;
		
		else
			cout << "same" << endl;
	}
	return 0;
}
	