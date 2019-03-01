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


char str[100];

int match(char str[], char b, char g)
{
	int i, j;
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == g)
			break;
	}
	if(str[i] == '\0')
		return 0;
	for(j = i; j >= 0; j--)
	{
		if(str[j] == b)
		{
			cout << j << " " << i << endl;
			break;
		}
	}
	str[i] = '#';
	str[j] = '#';
	match(str, b, g);
}

int main()
{
	char b, g;
	cin >> str;
	b = str[0];
	int i, length;
	length = strlen(str);
	for(i = 0; i < length; i++)
	{
		if(str[i] != b)
		{
			g = str[i];
			break;
		}
	}
	match(str, b, g);
	return 0;
}



