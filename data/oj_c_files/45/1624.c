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
 * ????????.cpp
 * ??????? s ? w ??? s ??? w ?????????
 * ????: 2010-11-19
 * ??: ??
 */



int main() {
	//??s,w
	char s[50], w[50];
	cin >> s >> w;

	//??s?w???
	int length = strlen(w);
	int length1 = strlen(s);

	//????s?w????????
	int i, j;
	for (i = 0; i < length; i++) {
		//??w[i]?s??????????????(length1-1)?
		if (w[i] == s[0]) {
			for (j = i + 1; j < i + length1; j++) {
				if (w[j] != s[j - i])
					break;
			}

			//??j??i+length1????w????s????i
			if (j == i + length1) {
				cout << i << endl;
				break;
			}
		}
	}

	return 0; //????
}
