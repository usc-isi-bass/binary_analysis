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
 * ????1206.cpp
 * ??????
 * ?????2012-12-16
 * ????????????
 */



int main() {
	char s[31], *p = NULL; //????
	cin.getline(s, 31); //????
	for (p = s; p < s + strlen(s); ++p) {
		if (*p > 47 && *p < 58)
			cout << *p; //???????
		else {
			cout << endl;
			while (*(p + 1) < 48 || *(p + 1) > 57)
				++p;
		} //?????????????????????
	}
	return 0; //????
}