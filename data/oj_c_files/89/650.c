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

/*???:????
**???:??
**?  ?:2010?12?11?
*/
int main()
{
	int i, j, n, flag = 0;
	int know[10000] = {0}, count[10000] = {0};//???????
	cin >> n;
	while (cin >> i >> j)
	{
		if (i == 0 && j == 0)
			break;
		know[i]++;//i????,+1
		count[j]++;//j???,+1
	}
	for (i = 0; i < n; i++)
		if (know[i] == 0 && count[i] == n - 1)//????i??i???????,????????
		{
			cout << i << endl;
			flag = 1;//??
		}
	if (flag == 0)
		cout << "NOT FOUND" << endl;//????????
	return 0;
}