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


int main(){
	char str[101], res[101];
	int n, stack[100], k;

	cin >> n;
	while (n--){
		cin >> str;
		int len = strlen(str);
		for (int i = 0; i < len; i++)
			res[i] = ' ';
		res[len] = '\0';

		k = 0;
		for (int i = 0; i < len; i++){
			if (str[i] == ')'){
				if (k != 0 && stack[k - 1] < 0)
					k--;
				else
					stack[k++] = i + 1;
			}else if (str[i] == '(')
				stack[k++] = -(i + 1);
		}
		for (int i = 0; i < k; i++){
			int index = stack[i];
			if (index < 0)	res[-index - 1] = '$';
			else			res[index - 1] = '?';
		}
		cout << str << endl;
		cout << res << endl;
	}
	return 0;
}