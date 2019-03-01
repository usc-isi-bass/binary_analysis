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
	char a[50];
	char b[50];
	cin>> a;
	//cin.get();
	cin >> b;
	int  i = 0, flag = 0;
	while (b[i] != '\0')
	{
		int k = 0;
		while (b[i] == a[k])
		{
			if (k == strlen(a) - 1)
		{
			cout << i  - strlen(a) + 1<< endl;
			flag = 1;
			break;
		}
			k ++;
			i ++;
		}
		if (flag == 1)
			break;
		i ++;
	}
	if (flag == 0)
		cout << "no";
	return 0;
}
