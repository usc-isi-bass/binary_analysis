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

//***********************
//**????????*****
//**???1300012728*****
//**2013.10.20***********
//***********************
int main()
{
	int n;
	cin >> n;
	int num[n];                        // ???????n???
	cin >> num[0];
	cout << num[0];                    // ???????????????????? 
	for (int i = 1; i < n; i++)
	{
		cin >> num[i];
		for (int j = 0; j < i; j++)
		{
			if (num[j] == num[i])      // ?????????? 
			num[i] = 0;
		}
		if (num[i])                    // ????????????????? 
		cout << ' ' << num[i];
	}
	return 0;
}