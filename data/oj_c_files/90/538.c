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

/*???:???
**???:??
**?  ?:2010?12?5?
*/
int apple(int M, int N);//??
int main()
{
	int M, N, i, t, ways;
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		cin >> M >>N;
		ways = apple(M, N);//??
		cout << ways << endl;
	}
		return 0;
}
int apple(int M, int N)
{
	if (N == 1)
		return 1;//??????,1???
	else if (M < 0)
		return 0;//???M - N < 0,??????,????1?????
	else
		return (apple(M, N - 1) + apple(M - N, N));//????N???1,????????
}