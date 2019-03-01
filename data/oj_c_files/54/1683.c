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
//*????????    **
//*?????? 1300012887 **
//*???2013.12.5 **
//********************************
int n, i, k, a;
int m (int number, int k1)  //????m????????
{
	if (number == n)  //????n??????i?
        return i;
	if (m (number+1, k1) != 0 && m (number+1, k1) % (n-1) == 0)
		return n * m (number+1, k1) / (n-1) + k;  //??????????
	return 0;
}

int main()  //?????
{
	cin >> n >> k;  //??????????? 
	for (i = n+k; ;i += n)
	{
		a = m (1, i);
		if (a != 0)
		{
			cout << a << endl;
		    break;
		}
	}
	return 0;
}
