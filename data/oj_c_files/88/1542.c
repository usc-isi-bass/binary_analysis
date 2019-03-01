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



/**
* @author ??
* @date 2010-12-8
* @description
* ??????:???? 
*/

int main()
{
	int flag = 1, count = 0;
	char str[31];
	cin.getline(str, 31);
	char *a = str;
	for (int i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) >= 48 && *(a + i) <= 57)
		{
			if (!flag)
				flag = 1;
			if (flag == 1)
				count ++;
			flag = 2;
			cout << *(a + i);
		}
		else
		{
			if (flag)
				cout << endl;
			flag = 0;
		}
	}
	cout <<endl;

	return 0;
}


	