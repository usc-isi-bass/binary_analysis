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
	int i,j,flag[101] = {0};
	char str[101];
	while(cin >> str)
	{
	for (i = 0; i < strlen(str); i ++)
	{
		cout << str[i];
		if (str[i] == ')')
		{
			for (j = i; j >= 0; j --)
			{
				if (str[j] == '(' && flag[j] == 0)
				{
					flag[i] = 1;
					flag[j] = 1;
					break;
				}
			}
		}
	}
	cout << endl;
	for (i = 0; i < strlen(str); i ++)
	{
		if (str[i] == '(' && flag[i] == 0)
			cout << "$";
		else if (str[i] == ')' && flag[i] == 0)
			cout << "?";
		else
			cout << " ";
	}
	cout << endl;
	memset(flag,0,sizeof(flag));
	}
	return 0;
}