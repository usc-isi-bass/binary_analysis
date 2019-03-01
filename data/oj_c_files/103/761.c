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

void change(char words[])
{
	int len = strlen(words);
	int i = 0;
	int d = 'A' - 'a';
	for(i = 0; i < len; i++)
	{
		if(words[i] <= 'z'&& words[i] >= 'a')
		{
			words[i] = words[i] + d;
		}
	}
}
int main()
{
	char words[100];
	cin >> words;
	change(words);
	char mark = words[0];
	int sum = 0, len = strlen(words);
	for(int i = 0; i < len; i++)
	{
		if(words[i] == mark)
		{
			sum++;
		}
		else
		{
			cout << "(" << mark << "," << sum << ")";
			mark = words[i];
			sum = 1;
		}
	}
	cout << "(" << mark << "," << sum << ")";
	return 0;
}