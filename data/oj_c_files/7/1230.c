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

//***??? 1200012772 *********
//***???????    *********
//***2012?12?29?    *********
int main()
{
	char str1[256],str2[256], str3[256];
	cin >> str1 >> str2 >> str3;
	int i = 0, j = 0, l1 = strlen(str1), l2 = strlen(str2);
	for (i = 0; i < l1; i++)
	{
		for (j = 0; j < l2; j++)
		{
			if (str1[i + j] != str2[j])
				break;
		}
		if (j == l2)
		{
			for (j = 0; j < l2; j++)
			{
				str1[i + j] = str3[j];
			}
			break;
		}
	}
	for (i = 0; i < l1; i++)
	{
		cout << str1[i];
	}
	cout << endl;
	return 0;
}