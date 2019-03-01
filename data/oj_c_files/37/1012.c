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
	int i, n, tim[26], tell;
	char a[1000];
	cin >> n;
	for(; n > 0; n--)
	{
		tell = 0;
		for(i = 0; i < 26; i++)
			tim[i] = 0;
		cin >> a;
		for(i = 0;i < strlen(a);  i++)
		{
			tim[a[i] - 'a']++;
		}
		for(i = 0; i < strlen(a); i++)
		{
			if(tim[a[i] - 'a'] == 1)
			{
				cout << a[i] << endl;
				tell = 1;
				break;
			}
		}
		if(tell == 0)
			cout << "no" << endl;
	}
	return 0;
}