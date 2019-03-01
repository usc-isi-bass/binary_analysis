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
	int n;
	cin >> n;
	while(n --) {
		int m, input[100];
		int total = 0, sum = 60;
		cin >> m;
		input[0] = 0;
		for(int i = 1; i <= m; i ++) {
			cin >> input[i];
			if(total + input[i] - input[i - 1] < 60 && input[i] < 60) {
				total += input[i] - input[i - 1] + 3;
				sum -= 3;
				if(total == 61)
					sum += 1;
				if(total == 62)
					sum += 2;
			}
		}
		cout << sum << endl;
	}
	return 0;
}