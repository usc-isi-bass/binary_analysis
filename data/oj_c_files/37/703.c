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
	char str[100000];
	int t,i,j,flag;
	cin >> t;
	for(i = 0; i < t; i++)
	{
		int count[26] = {0};
		flag = 0;
		cin >> str;
		for(j = 0; str[j] != '\0'; j++)
		{
			count[str[j] - 'a']++;
		}
		for(j = 0; str[j] != '\0'; j++)
		{
			if(count[str[j] - 'a'] == 1)
			{
				cout << str[j] << endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout << "no" << endl;
	}
	return 0;
}