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

/*???2011-12-30
 *??????
 *????09.cpp
 *????? - ??(4-9) ?????
 */


int main()
{
	int n = 0;
	double total = 0;
	double valid = 0;
	double cocktail = 0.0;
	cin >> n;
	cin >> total >> valid;
	cocktail = valid / total;
	for (int temp = 1; temp < n; temp++)
	{
		cin >> total >> valid;
		if ( (valid / total) > cocktail + 0.05 )
			cout << "better" << endl;
		else if ( (valid / total) < cocktail - 0.05 )
			cout << "worse" << endl;
		else
			cout << "same" << endl;
	}
	return 0;
}
