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
	char string[256], subString[256], replacement[256];
	char *n = NULL;
	int l, i;
	memset(string, '\0', sizeof(string));
	memset(subString, '\0', sizeof(subString));
	memset(replacement, '\0', sizeof(replacement));
	cin >> string >> subString >> replacement;
	n = strstr(string, subString);
	l = strlen(subString);
	if (n != NULL)
	{
		for (i = 0; i < l; i++)
		{
			n[i] = replacement[i];
		}
	}
	cout << string << endl;
	return 0;
}