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
//*?????????   **
//*????? 1200012917 **
//*???2012.12.7  **
//********************************
int main()
{
	char *p = NULL;
	char str[100];
	int t = 0, i = 0;
	cin.getline(str, 100);
	p = str;
	for (; *p != '\0'; p++)
	{
		if (*p == ' ')
		{
			if (t == 0)
			{
				*(str + i) = *p;
				i++;
				t = 1;
			}
		}
		else
		{
			*(str + i) = *p;
			i++;
			t = 0;
		}
	}
	for (p = str; p <= str + i - 1; p++)
	{
		cout << *p;
	}
	cout << endl;
	return 0;
	
}