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

char p[30];
int l, i, j, t[30];//???t????????p?ascll?
int main() {
	cin.getline(p, 31);//????
	l = strlen(p);//l???
	for (i = 0; i < l; i++) {
		*(t + i) = *(p + i);
		if (*(t + i) < 58 && *(t + i) >= 48) {
			if (*(t + i - 1) != 45)
				*(t + i) = *(t + i) - 48;
		} //??????????
		else {
			*(t + i) = 32;
		}//??????????32
	}
	i = 0;//i???
	while (i < l) {
		if (*(t + i) != 32) {
			cout << *(t + i);
		}//??32?????
		else if (*(t + i) == 32) {
			cout << endl;//?32?????h??
			for (j = i; j < l; j++) {
				if (*(t + j) != 32) {
					i = j - 1;
					break;
				}//??????????????32?????
			}
		}
		i = i + 1;//????
	}
	return 0;
}//?????

