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
	int min = INT_MAX, max = INT_MIN, n1, n2, i, n = 0;             // max,min??????????????,n1,n2??????????????,n?????
	char a[201] = {'\0'};
	cin.getline(a, 201, '\n');
	for (i = 0; a[i] != '\0'; i++)                    // ??????????
	{
		if (a[i] != ' ' && a[i] != ',')
			break;
	}
	for (; a[i] != '\0'; i++)                         // ?????????????????????????
	{
		if (a[i] == ' ' || a[i] == ',')
		{
			min = n;
			max = n;
			n1 = i;
			n2 = i;
			n = 0;
			break;
		}
		else
			n += 1;
	}
	if (a[i] != 0)
		i++;
	for (; a[i] != '\0'; i++)
	{
		if ((a[i] == ' ' || a[i] == ',') && n != 0)                    // ?????????????????????
		{
			if (n > max)
			{
				max = n;
				n2 = i;
			}
			if (n < min)
			{
				min = n;
				n1 = i;
			}
			n = 0;
		}
		else if ((a[i] == ' ' || a[i] == ',') && n == 0)           // ????????????
			continue;
		else
			n += 1;
	}
	if (n != 0)                         // ????????????????????????
	{
		if (n > max)
		{
			max = n;
			n2 = i;
		}
		if (n < min)
		{
			min = n;
			n1 = i;
		}
	}
	for (i = n2 - max; i < n2; i++)
		cout << a[i];
	cout << endl;
	for (i = n1 - min; i < n1; i++)
		cout << a[i];
	return 0;
}