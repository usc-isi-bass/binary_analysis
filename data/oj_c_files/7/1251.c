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
//*???2.cpp   **
//*?????? 1200012768 **
//*???2012.12.29  **
//*???????  **
//********************************
int main()
{
	char str[256], sub[256], rep[256];
	cin >> str >> sub >> rep;
	char *p = strstr(str, sub), *temp1, *temp2;
	if (p == NULL)
		cout << str;
	else
	{
		temp1 = p, temp2 = rep;
		while (*temp2 != '\0')
		{
			*temp1 = *temp2;
			temp1++, temp2++;
		}
		cout << str;
	}
	return 0;
}
