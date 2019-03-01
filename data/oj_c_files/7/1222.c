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
	char str[200], str1[50], str2[50];
	char *p, *q;
	int length, i;
	cin.getline(str, 200);
	cin >> str1 >> str2;
	length = strlen(str1);
	q = str;
	p = strstr(str, str1);
	if (p != NULL)
	{
		q = p + length;
		for (i = 0; &str[i] != p; i++)
			cout << str[i];
		cout << str2 ;
		for (; *q != '\0'; q++)
			cout << *q;
		cout << endl;
	}
	else
		cout << str << endl;
	return 0;
}