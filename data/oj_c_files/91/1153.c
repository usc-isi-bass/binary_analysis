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
	char c[110], ch[110];
	cin.getline(c,110);
	int len = strlen(c);
	for (int i = 0; i < len - 1; i++)
		ch[i] = c[i] + c[i + 1];
	ch[len - 1] = c[len - 1] + c[0];
	for (int j = 0; j < len; j++)
		cout << ch[j];
	cout << endl;
	return 0;
}