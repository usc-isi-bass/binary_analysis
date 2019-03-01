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
	int del = 0;
	char word[100];
	cin.getline(word, 100);
	int len = strlen(word);
	for (int i = 1; i < len; i++)
		if (*(word + i) == ' ' && *(word + i - 1) == ' ') //????
		{
			del++; //?????????1
			for (int j = i; j < len - del; j++) //?????????
				*(word + j) = *(word + j + 1);
			i--; //?????????
		}
	for (int k = 0; k < len - del; k++) //?????????
		cout << *(word + k);
	return 0;
}
