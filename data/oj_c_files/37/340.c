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

//????????????
int main()
{
	char a[100001]; // ??a?????
	int count[26]; // ??count????
	int i, j, t; // i,j??
	cin >> t;
	for (j = 1; j <= t; j++)
	{
		cin >> a;
		memset(count, 0, sizeof(count)); // ????????
		for (i = 0; a[i] != '\0'; i++) 
			count[a[i] - 'a']++; // ???????1
		for (i = 0; a[i] != '\0'; i++)
			if (count[a[i] - 'a'] == 1) // ??????????
			{
				cout << a[i] << endl;
				break;
			}
		if (a[i] == '\0') // ???????????
			cout << "no" << endl;
	}
	return 0;
}