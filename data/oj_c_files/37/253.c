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

/*???:???1????
**?  ?:??
**?  ?:2010?11?19?
*/
int main()
{
	int t, i, j, k, l, flag;
	char str[100000];
	cin >> t;
	for (i = 1; i <= t; i++)
	{
		cin >> str;
		flag = 0;
		l = strlen(str);
		//??????????????????????????
		for (j = 0; j < l; j++)
		{
			for (k = 0; k < l; k++)
			{
				if ((str[j] == str[k]) && (j != k))
					break;//??????????
			}
			if (k == l)
			{
				cout << str[j] << endl;
				flag = 1;
				break;//k = l?????,??,???????
			}
		}
		if (flag == 0)
			cout << "no" << endl;//??????
	}
	return 0;
}