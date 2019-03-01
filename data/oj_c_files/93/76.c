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
	int number;
	int divisors[] = {3, 5, 7};
	int flag;
	
	cin >> number;
	flag = 0;
	
	for (int i=0; i<3; i++) {
		if (number % divisors[i] == 0) {
			if (flag == 1)
				cout << ' ';
			cout << divisors[i];
			flag = 1;
		}
	}
	if (flag == 0)
		cout << 'n';
	
	cout << endl;

	return 0;
}