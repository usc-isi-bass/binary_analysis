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
//*????????   **
//*?????? 1200012844 **
//*???2012.10.5  **
//********************************

int main()//?????
{
	int n, i = 0, s; //??n i s?????
	double a = 0, b = 0, c = 0, d = 0, e, f, g, h;//??a b c d e f g h???????
	cin >> n;//??????n
	for (i = 1; i <= n; i++)
	{
		cin >> s;//??????
		if( s < 19 )
			a = a + 1;
		else if( s < 36 )
			b = b + 1;
        else if( s < 61 )
			c = c + 1;
		else
			d = d + 1;//??????????
	}
	//???????????????????
	e = a/n*100;
	f = b/n*100;
	g = c/n*100;
	h = d/n*100;
	//???????????????????
	cout << "1-18: "; printf("%.2f", e);	cout << "%" << endl;
	cout << "19-35: "; printf("%.2f", f); cout << "%" << endl;
	cout << "36-60: "; printf("%.2f", g); cout << "%" << endl;
	cout << "60??: "; printf("%.2f", h); cout << "%" << endl;
	return 0;
}
