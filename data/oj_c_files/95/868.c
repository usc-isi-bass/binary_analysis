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
	char str1[100], str2[100];
	int i;
	cin.getline (str1, 100);
	cin.getline (str2, 100);
	for (i = 0; ; i++)
	{
		if (str1[i] == '\0')
			break;
		if (str1[i] >= 'a')
			str1[i] = str1[i] - 32;
	}
	for (i = 0; ; i++)
	{
		if (str2[i] == '\0')
			break;
		if (str2[i] >= 'a')
			str2[i] = str2[i] - 32;
	}
	if (strcmp(str1, str2) == 0) 
		cout << '=' << endl;
	if (strcmp(str1, str2) == -1) 
		cout << '<' << endl;
	if (strcmp(str1, str2) == 1) 
		cout << '>' << endl;
	return 0;
}