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
//*???1.cpp   **
//*?????? 1200012768 **
//*???2012.12.1  **
//*??????????  **
//********************************
int main()
{
	char ch;
	int flag = 0;
	while((ch = cin.get()) != '\n')
	{
		if (ch != ' ')
		{
			cout << ch;
			flag = 0;
		}
		else if (flag == 0)
		{
			cout << ' ';
			flag = 1;
		}
	}
	return 0;
}