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

//***************************************************************************************************************************
/* @file   2ndfor1
 * @author ??
 * @date   2012-9-26
 * @desc   ???????????? - 
 */
int main()															//?????
{
	int a, b, c, z;													//????
	cin >> z;
	a = z % 3 == 0;													//??z?3?5?7???????????a?b?c=1
	b = z % 5 == 0;
	c = z % 7 == 0;
	if (a && b && c) cout << "3 5 7" << endl;						//?????????????3 5 7
	else if (a && b) cout << "3 5" << endl;							//????????????????????????
	else if (a && c) cout << "3 7" <<endl;
	else if (b && c) cout << "5 7" <<endl;
	else if (a) cout << "3" <<endl;									//??????????????????
	else if (b) cout << "5" <<endl;
	else if (c) cout << "7" <<endl;
	else cout << "n" << endl;										//????????no
	return 0;
}