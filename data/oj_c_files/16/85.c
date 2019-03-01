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

//??????
//2010?11?26?
//1000012753 ???
int main()
{
	char str1[100], str2[100];
	int i, j, l;
	cin >> str1;
	l = strlen(str1);
	j = 0;
	for (i = l - 1; i >= 0; --i)
		str2[j++] = str1[i];
	str2[j] = '\0';
	cout << str2 << endl;
	return 0;
}