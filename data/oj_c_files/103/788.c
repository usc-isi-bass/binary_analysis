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

/*?????????????????????????
 * ??????????????????????????????????????????????????
 * ???????????????????????????
 *????: 2012-12-23
 *??: ??
 */

int main() {
	char str[1001];
	cin >> str;
	int i, num = 1, len = strlen(str);
	if (str[0] > 96) //??????????
		str[0] -= 32;
	for (i = 1; i <= len; i++) {
		if (str[i] > 96) //????
			str[i] -= 32;
		if (str[i] == str[i - 1]) //???????????
			num++;
		else { //???????????
			cout << '(' << str[i - 1] << ',' << num << ')';
			num = 1;
		}
	}
	return 0;
}
