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

/*
 *???? DANCIDAOPAI.cpp
 *??????
 *????: 2012-11-21
 *?????????????
 */
int main() {
	int i = 0;
	char word[50][50];//??????????
	while (cin >> word[i])//?????
		i++;
	int j;
	j = i - 1;
	cout << word[j];
	j--;
	while (j >= 0) {
		cout << " " << word[j];
		j--;
	}//??????
	return 0;
}
