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
 *  ????.cpp
 *  Created on: 2012-11-11
 *  Author: ???
 *  ??:???m???????
 */
int main() {
	int n, day, num = 0, i, j, k;//?????day???
	cin >> n;//??n
	char room1[n + 2][n + 2], room2[n + 2][n + 2], t;//room1???????????room2?????????
	t = getchar();//??????
	for (i = 1; i <= n; i++) {//????????
		for (j = 1; j <= n + 1; j++) {
			room1[i][j] = room2[i][j] = getchar();
		}
	}
	cin >> day;//????
	for (k = 1; k < day; k++) {//??day?
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (room2[i][j] == '@' || room2[i][j] == '#')
					continue;//??????????????????
				if (room1[i - 1][j] == '@' || room1[i + 1][j] == '@'
						|| room1[i][j - 1] == '@' || room1[i][j + 1] == '@') {//?????????
					room2[i][j] = '@';//?????
				}
			}
		}
		for (i = 1; i <= n; i++) {//?room1???room2????????
			for (j = 1; j <= n; j++) {
				room1[i][j] = room2[i][j];
			}
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (room2[i][j] == '@')
				num++;//?????@??????1
		}
	}
	cout << num << endl;//????????
	return 0;
}