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
	char inputChar, tmp;
	tmp = ' ';
	int num = 0;
	while (true) {
		inputChar = getchar();
		if(inputChar != '\n') {
			if(inputChar != ' ') num++;
			else {
				while(tmp == ' ') {
					tmp = getchar();
					if (tmp != ' ') {
						printf("%d,", num);
						tmp = ' ';
						num = 1;
						break;
					}
				}	
			}
		}
		else {
			printf("%d", num);
			break;
		}
	}
	return 0;
}