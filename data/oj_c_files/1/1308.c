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


int calculate(int a, int num) { // a is the max num
	int sum = 0;
	if(num == 1) return 1;
	for(int i = num; i >= 2; i--) {
		if(num % i == 0 && i <= a) {
			sum += calculate(i, num / i); 
		}
	}
	return sum;
}

int main () {
	int n;
	cin >> n;
	int num = 0;
	for(int i = 0; i < n; i++) { // input part
		cin >> num;
		cout << calculate(num, num) << endl;
	}
	return 0;
}