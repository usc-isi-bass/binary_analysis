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
	char	words[500];
	int		N;
	cin >> N;
	cin.get();

	for (int i = 0; i < N; i ++)
	{
		cin.getline(words, 500);
		char *p = words;
		while(*p != '\0')
		{
			if(*p == 'A')
			{cout << 'T';}
			else if(*p == 'T')
			{cout << 'A';}
			else if(*p == 'C')
			{cout << 'G';}
			else if(*p == 'G')
			{cout << 'C';}
			p ++;
		}
		cout << endl;
	}
	return 0;
}