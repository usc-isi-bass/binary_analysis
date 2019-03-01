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

char change(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return ch - 'a' + 'A';
	else
		return ch;
}

int main()
{
	int i, num = 1, len;
	char str[100];
	cin.getline(str, 100);
	len = strlen(str);
	cout << "(" << change(str[0]) << ",";
	for(i = 1; i < len; i++)
	{
		if(change(str[i]) == change(str[i - 1]))
			num++;
		else
		{
			cout << num << ")(" << change(str[i]) << ",";
			num = 1;
		}
	}
	cout << num << ")" << endl;
	/*if(change(str[len - 1]) == change(str[len - 2]))
		cout << num + 1 << ")" << endl;
	else
		cout << num << ")(" << change(str[len - 1]) << ",1)" << endl;*/
	return 0;
}
