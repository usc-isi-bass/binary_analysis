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
//*???????? **
//*?????? 1300062706 **
//*???2013.12.5**
//********************************
int n, k;
int monkey(int m, int i)
{
	if (i == n+1)
		return m;
	else
	{
		if (m%(n-1) == 0)
		    return monkey(m*n/(n-1)+k, i+1);
		else
			return 0;
	}
}
int main()
{
	int i;
	cin >> n >> k;
	for (i=n-1;;i+=n-1)
	{
		if (monkey(i, 1)%n != 0)
		{
			cout << monkey(i, 1) << endl;
			break;
		}
	}
	return 0;
}