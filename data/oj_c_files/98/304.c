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
	int n, counter = 0,len;
	char a[300][50];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n ; i++)
	{
		if (counter == 0)
		{
			cout << *(a + i);
			counter += strlen(*(a + i));
		}
		else if (counter + strlen (*(a + i)) + 1 < 80)
		{
			cout << " " << *(a + i);
			counter += strlen(*(a + i)) + 1;
		}
		else if (counter + strlen (*(a + i)) + 1== 80)
		{
			cout << " " << *(a + i) << endl;
			counter =0;
		}
		else
		{
			cout << endl << *(a + i);
			counter = strlen (*(a + i));
		}
	}

	
	return 0;
}