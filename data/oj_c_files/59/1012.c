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
 * work.cpp
 * function:????
 * Created on: 2012-12-3
 * Author: sear
 */
int n;			//n??????
char a[101][101];//????a???????
void judge(int i, int j) {//????????
	for (int d = -1; d <= 1; d += 2) {//??????????????"$"
		if ((i + d >= 0) && (i + d < n) && (a[i + d][j] == '.'))
			a[i + d][j] = '$';
		if ((j + d >= 0) && (j + d < n) && (a[i][j + d] == '.'))
			a[i][j + d] = '$';
	}
}
int main() {
	int m, num = 0, i, j, k;//m????,,
							//i,j,k	?????
	cin >> n;				//??n
	for (i = 0; i < n; i++)//?????????
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	cin >> m;				//????m
	for (k = 1; k <= m; k++){//m-1??????m?
		for (i = 0; i < n; i++)//?????????????????�@�
			for (j = 0; j< n; j++)
				if (a[i][j] == '$')
					a[i][j] = '@';
		for (i = 0; i < n; i++)//????
			for (j = 0; j< n; j++)
				if (a[i][j] == '@') {//????
					judge(i, j);//??????
					num++;	//?????1
					a[i][j] = '#';
							//???????????????
				}
	}
	cout << num;		//????
	return 0;
}
