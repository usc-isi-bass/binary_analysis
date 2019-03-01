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

//*******************************************************
//*11.2??  ????????????                   *
//*?????  ?? 1100012844                          *
//*???2011?11?2?                                  *
//*******************************************************
int main()
{
	char str[100001];
	int t, count[26], i, j, flag;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> str;
		flag = 1;
		for (j = 0; j < 26; j++)
			count[j] = 0;
		for (j = 0; str[j] != '\0'; j++)
			count[str[j] - 'a']++;
		for (j = 0; str[j] != '\0'; j++)
			if (count[str[j] - 'a'] == 1)
			{
				cout << str[j] << endl;
				flag = 0;
				break;
			}
		if (flag)
			cout << "no" << endl;
	}
	return 0;
}