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

void  Palindrome(char []);
int main()
{
	char str1[500];
	cin >> str1;
	Palindrome(str1);
	return 0;
}
void  Palindrome(char str1[])
{	
	int i, k, m, n, a, b;
	m = strlen(str1);
	for (i = 1; i < m; i++)
	{
		for (k = 0; k < m; k++)
		{
			for (a = k,b = k + i; a < b; a++,b--)
			{
				if (str1[a] != str1[b])
					break;
			}
			if (a == b + 1 || a == b)
			{
				for(n = k; n <= k + i; n++)
				{
					cout << str1[n];
				}
				cout << endl;
			}
		}
	}
}