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

int main() {
	char str[100][100];

	int j, i, c;
	for (i = 0; i < 100; i++) {//?????
		for (j = 0; j < 100; j++)
			str[i][j] = 'x';

	}
	i = 0;
	cin >> str[i++];
	while ((c = getchar()) != '\n')//????
		cin >> str[i++];
	i--;
	while (i > 0)//??????
		cout << str[i--] << ' ';
	cout << str[0];
	return 0;
}