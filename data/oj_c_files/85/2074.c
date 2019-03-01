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
	int n, i, j, temp;
	char s[21];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> s;
		temp = 0;
		if ((s[0] != '_') && ((s[0]>'z') || (s[0] < 'a')) && ((s[0]<'A') || (s[0]>'Z')))
		{
			cout << "no" << endl;
			continue;
		}
		for (j = 1; j < strlen(s); j++)
		{
			if ((s[j] != '_') && ((s[j]>'z') || (s[j] < 'a')) && ((s[j]<'A') || (s[j]>'Z')) && ((s[j]<'0') || (s[j]>'9')))
			{
				cout << "no" << endl;
				temp = 1;
				break;
			}
		}
		if (temp == 0)
			cout << "yes" << endl;
	}
	return 0;
}