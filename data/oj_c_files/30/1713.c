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
//*???3.?7??????? **
//*?????? 1300017623 **
//*???2013.10.9  **
//********************************
int main()
{
	int n, sum = 0; //??????n?sum?????
	cin >> n; //??n
	for (int i = 1; i <= n; i++) //??n?
		if (i % 7) //??i???7??
			if (i / 100 != 7) //??i??????7
				if ((i / 10) % 10 != 7) //??i??????7
					if (i % 10 != 7) //??i??????7
						sum += i*i; //?i??7?????????
	cout << sum; //??sum
	return 0;
}
