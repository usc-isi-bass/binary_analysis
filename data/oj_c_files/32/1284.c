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
	int n, num1[101], num2[101], len1, len2, m, j;
	char str1[102], str2[102];

	cin >> n;
	cin.get();
	for (int k = 1; k <= n; k++)
	{
		cin.getline(str1,102);
		cin.getline(str2,102);
                cin.get();
		len1 = strlen (str1);
		len2 = strlen (str2);
		memset(num1, 0, sizeof(num1));
        memset(num2, 0, sizeof(num2));
		j = 0;
		for (int i = len1 - 1; i >= 0; i--)
		{
			num1[j] = str1[i] - '0';
			j++;
		}
		j = 0;
		for (int i = len2 - 1; i >= 0; i--)
		{
			num2[j] = str2[i] - '0';
			j++;
		}
		for (int i = 0; i < len1; i++)
		{
			num1[i] = num1[i] - num2[i];
			if (num1[i] < 0)
			{
				num1[i + 1]--;
				num1[i] += 10;
			}
		}
		m = len1;
		while (num1[m] == 0)
			m--;
		for (int i = m; i >= 0; i--)
			cout << num1[i];
		cout << endl;
	}

	return 0;

}