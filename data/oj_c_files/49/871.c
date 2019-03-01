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

//*************************
//*??????  1200062705
//*????4.????
//*???2012-11-18
//*************************
int main()
{
	int i, j, p, n;
	char string[501]; // ??????
	cin >> string;
	n = strlen(string); // ?????
	for (i = 2; i <= n; i++) //
    {
		for (j = 0; j < n; j++)
	    {
			for (p = 0; p < i / 2; p++)
		    {
				if (string[j + p] != string[j + i - p - 1])		break;
		    }
				if (p == i / 2)
		        {
					for (p = j; p < j + i; p++)
					{
						cout << string[p];
					}
					cout << endl;
				 }
	    }
    }
return 0;
}

