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

char str[103], temp[103];
int len;
int match(int x) {
	int y;
	if (x == len)//??x?len??????????x 
		return x;
	if (str[x] == '(')//??str[x] = '('??y = match?x+1) 
		y = match(x + 1);
	else if (str[x] == ')')//??str[x] = '(',??x 
		return x;
	else//???????match?x+1? 
		return match(x + 1);
	if (y == len) {//??y = len???temp[x] = $,?????????????y 
		temp[x] = '$';
		return y;
	} else//???????match(y+1) 
		return match(y + 1);
}
int main() {
	while (cin >> str) {//????? 
		cout << str << endl;//???str 
		len = strlen(str);//len?str??? 
		int z = 0;
		memset(temp, ' ', sizeof(temp));//?temp?????? 
		while (z != len) {//?????????? 
			z = match(z);
			if (z != len) {
				temp[z] = '?';
				z++;
			}
		}
		for (int i = 0; i < len; i++)
			cout << temp[i];
		cout << endl;
	}
	return 0;
}
